#include <iostream>
using namespace std;

/**
    * main - check if a number is odd or even
    * return: (0)
*/
int main(void)
{
    int num;

    cout << "Enter a number to check if its odd or even: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << "  is Even \n";
    }
    else
    {
        cout << num << " is Odd \n";
    }
    return (0);
}