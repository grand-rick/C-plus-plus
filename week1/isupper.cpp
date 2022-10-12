#include <iostream>
using namespace std;
/**
    * main - check if a character is uppercase or not 
    * return: (0) for success
*/
int main(void)
{
    char ch;

    cout << "Enter a character to check: ";
    cin >> ch;
    /** check to see if the character is an alphabet first **/
    if (ch >= 65 && ch <= 122) 
    {
        if ( ch >= 65 && ch <= 97)
        {
            cout << ch << " is Uppercase\n";
        }
        else
        {
            cout << ch << " is lowercase\n";
        }
        
    }
    /** the character is not an alphabet **/
    else
    {
        cout << ch << "Is not even an alphabet, its impossible to determine its case\n";
    }
}