#include <iostream>

using namespace std;

class StrLength
{
    private:
        char* string;

    public:
        int strlen(char* string);
};



int main()
{
    StrLength one;

    char response[100];
    cout << "Enter a string: ";
    cin >> response;

    response[100] = '\n';



    int strlLength = one.strlen(response);

    cout << "The length is " << strlLength << endl;
    return 0;
/**
 * The function takes a string as an argument and returns the length of the string
 * 
 * @param string The string to be measured.
 * 
 * @return The length of the string.
 */
}

int StrLength::strlen(char* string)
{
    int length = 0;
    int i = 0;

    while (string[i] != '\0')
    {
        length++;
        i++;
    }

    return length;
}