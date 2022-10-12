#include <iostream>
using namespace std;

/**
    * main - Check if a character is an alphabet or not
    * return (0)
*/

int main(void)
{
    char c;
    cout << "Enter a character to check \n";
    cin >> c; 
    /** Refer to ASCII table to comprehend this **/
    if ((c >= 97 && c <= 122 )|| (c >= 65 && c <= 90)) 
    {
        cout << c << " is an Alphabet\n";
    }
    else
    {
        cout << c << " is not exactly an Alpabet.\n";
    }
    return (0);
}