#include <iostream>
#include <cmath>

using namespace std;

/*Program to check if a number is a palindrome or not*/

int main() {
    int no, num, rev, digit;
    rev = 0;

    cout << "Enter a number: ";
    cin >> no;

    num = no;

    do {
        digit = num%10;
        rev = (rev*10)+digit;
        num = num/10;
    } while(num>0);

    if(rev==no) {
        cout << no << " is a palindrome number" << endl;
    } else if(num<0){
        cout << no << " is NOT a palindrome number" << endl;
    } else {
        cout << no << " is NOT a palindrome number" << endl;
    }
    return 0;
}
