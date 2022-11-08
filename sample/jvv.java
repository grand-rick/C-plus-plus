import java.util.Scanner;

public class Account {
    private float balance;

    public void input() {
        Scanner in = new Scanner(System.in);

        System.out.print("Enter the initial account balance: ");
        balance = in.nextFloat();
    }

    public void update(String x) {
        Scanner in = new Scanner(System.in);

        float update = 0;
        System.out.print("Enter amount to " + x + ": ");
        update = in.nextFloat();

        balance = (x == "deposit") ? balance + update : balance - update;
    }

    public void show_balance() {
        System.out.println("Your current balance is: " + balance);
    }

    public static void main(String[] args) {
        Account a = new Account();

        a.input();
        a.show_balance();

        char response = 'y';

        while(response == 'y') {
            Scanner in = new Scanner(System.in);

            System.out.print("Do you want to update balance? (y/n) ");
            response = in.nextLine().charAt(0);

            if (response == 'n') {
                a.show_balance();
                System.out.println("Thank you for banking with us");
                break;
            }

            System.out.print("Do you want to deposit or withdraw? (d/w) ");
            char ans = in.nextLine().charAt(0);

            if (ans == 'd') {
                a.update("deposit");
                a.show_balance();
            } else if (ans == 'w') {
                a.update("withdraw");
                a.show_balance();
            } else {
                System.out.println("Please use 'd' or 'w' to indicate action.");
            }
        }
    }
}