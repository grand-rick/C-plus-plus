#include <iostream>
#include <string>

using namespace std;

class account {
    private:
        float balance;
    public:
        void input() {
            cout << "Enter the initial account balance: ";
            cin >> balance;
        }
        void update(string x) {
            float update = 0;
            cout << "Enter amount to " << x << ": ";
            cin >> update;

            balance = (x == "deposit") ? balance + update : balance - update;
        }
        void show_balance() {
            cout << "Your current balance is: " << balance << endl;
        }
};

int main () {
    account a;

    a.input();
    a.show_balance();

    char response = 'y';

    while(response == 'y') {
        cout << "Do you want to update balance? (y/n) ";
        cin >> response;

        if (response == 'n') {
            a.show_balance();
            cout << "Thank you for banking with us" << endl;
            break;
        }

        cout << "Do you want to deposit or withdraw? (d/w) ";
        char ans = 'd';
        cin >> ans;

        if (ans == 'd') {
            string d = "deposit";
            a.update(d);
            a.show_balance();
        } else if (ans == 'w') {
            string w = "withdraw";
            a.update(w);
            a.show_balance();
        } else {
            cout << "Please use 'd' or 'w' to indicate action." << endl;
        }
    }

    return 0;
}