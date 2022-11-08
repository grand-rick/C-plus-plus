#include <iostream>
#include <string>

using namespace std;

/* MINI-PROJECT - ATM
    -> Check balance
    -> Cash Withdraw
    -> User Details
    -> Update Mobile No
*/


class atm {
    private: 
        string username;
        string mobileNo;
        long int accountNo = 0;
        long int PIN = 0;
        float balance = 0.0;

    public:
        void input_user_details();
        void check_balance();
        void withdraw();
        void show_user_details();
        void update_mobileNo();

};


int main() {
    atm one;

    cout << "Welcome to the GrandRick Productions International Bank" << endl
         << "Fill your details below to create an account" << endl;

    one.input_user_details();


    char response = 'c';
    do 
    {
        cout << "Select Options " << endl;
        cout << "Check balance -> 'c'" << endl
            << "Cash withdraw -> 'w'" << endl
            << "Update Mobile No -> 'm'" << endl
            << "Check all your details 'd'" << endl
            << "Quit application" << endl;
        cin >> response;

        switch (response)
        {
            case 'c':
                one.check_balance();
                break;
            case 'w':
                one.withdraw();
                break;
            case 'm':
                one.update_mobileNo();
                break;
            case 'd':
                one.show_user_details();
                break;
            default:
                break;
        }
    } while (response != 'q');

    cout << "Thank You for banking with us! :)" << endl;
    
    return 0;
}

/**
 * It takes in the user's details and stores them in the class variables
 */
void atm::input_user_details() 
{
    cout << "What is your username? ";
    cin >> username;

    cout << "Enter mobile number: ";
    cin >> mobileNo;

    cout << "What is your account number? ";
    cin >> accountNo;

    cout << "Enter PIN: ";
    cin >> PIN;

    cout << "Enter balance: ";
    cin >> balance;

    cout << "Your account is set up!" << endl;
}


/**
 * The function checks the balance of the account by asking for the account number and the PIN
 * 
 * @return The balance of the account
 */
void atm::check_balance() {
    long int accNo = 0,
             pin = 0;

    cout << "Account Number: ";
    cin >> accNo;

    if (accNo != accountNo) 
    {
        cout << "Account Number does not exist" << endl;
    } else 
    {
        for (int i= 0; i < 3; i++) 
        {
            int tries = 3;
            cout << "PIN: ";
            cin >> pin;

            if (PIN == pin) 
            {
                cout << "Your balance is " << balance << endl;
                break;
            } else 
            {
                if (!tries) 
                {
                    cout << "You have run out of tries" << endl;
                    break;
                }
                cout << "Wrong PIN, you have " << tries << " tries remaining " << endl;
                tries--;
            }
        }
    }
}


/**
 * The function checks if the account number entered by the user exists, if it does, it then checks if
 * the PIN entered by the user is correct, if it is, it then checks if the amount entered by the user
 * is less than or equal to the balance in the account, if it is, it then withdraws the amount from the
 * account
 */
void atm::withdraw() {
    long int accNo = 0,
             pin = 0;
    float amt = 0.0;

    cout << "Account Number: ";
    cin >> accNo;

    if (accNo != accountNo) 
    {
        cout << "Account Number does not exist" << endl;
    } else 
    {
        for (int i= 0; i < 3; i++) 
        {
            int tries = 3;
            cout << "PIN: ";
            cin >> pin;

            if (PIN == pin) 
            {
                cout << "How much would you like to withdraw? ";
                cin >> amt;

                if (balance >= amt)
                {
                    balance -= amt;
                    cout << "You have withdrawn Kshs " << amt << endl;
                } else
                {
                    cout << "Insufficient balance in your account, try a lower amount" << endl;
                }
                break;
            } else 
            {
                if (!tries)
                {
                    cout << "You have run out of tries" << endl;
                    break;
                }
                cout << "Wrong PIN, you have " << tries << " tries remaining " << endl;
                tries--;
            }
        }
    }
}


/**
 * It shows the user details if the account number and PIN are correct
 */
void atm::show_user_details()
{
    long int accNo = 0,
             pin = 0;

    cout << "Account Number: ";
    cin >> accNo;

    if (accNo != accountNo) 
    {
        cout << "Account Number does not exist" << endl;
    } else 
    {
        int tries = 3;
        for (int i = 0; i < 3; i++)
        {
            cout << "PIN: ";
            cin >> pin;
            if (pin == PIN) 
            {
                cout << "Verification Successful!" << endl
                    << "Here are your details" << endl;
                cout << "Username: " << username << endl;
                cout << "Account Number: " << accountNo << endl;
                cout << "PIN: " << PIN << endl;
                cout << "Mobile Number: " << mobileNo << endl;
                cout << "Balance: " << balance << endl;
                break;
            } else 
            {
                if (!tries)
                {
                    cout << "You have run out of tries" << endl;
                    break;
                }
                cout << "Wrong PIN, you have " << tries << " tries remaining " << endl;
                tries--;
            }
        }
    }
}


/**
 * It takes the account number and PIN from the user and updates the mobile number if the account
 * number and PIN are correct
 */
void atm::update_mobileNo()
{
    long int accNo = 0,
             pin = 0;
    string newNum;

    cout << "Account Number: ";
    cin >> accNo;

    if (accNo != accountNo) 
    {
        cout << "Account Number does not exist" << endl;
    } else 
    {
        int tries = 3;
        for (int i= 0; i < 3; i++) 
        {
            cout << "PIN: ";
            cin >> pin;

            if (PIN == pin) 
            {
                cout << "New number: ";
                cin >> newNum;

                mobileNo = newNum;

                cout << "Congratulations! Your new number is " << mobileNo << endl;
                break;
            } else 
            {
                if (!tries)
                {
                    cout << "You have run out of tries" << endl;
                    break;
                }
                cout << "Wrong PIN, you have " << tries << " tries remaining " << endl;
                tries--;
            }
        }
    }
}