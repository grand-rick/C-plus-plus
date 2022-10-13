#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Concat
{
    private:
        int length = 0;
        string full = "";

    public:
        void concatenate();
};


int main()
{
    Concat one;
    one.concatenate();
    return 0;
}

void Concat::concatenate()
{
    cout << "Enter the number of strings to input: ";
    cin >> length;

    /* Creating an array of strings with the length of the number of strings the user inputs. */
    string response[length];

    cout << "Enter " << length << " strings: ";

    /* This is a for loop that is taking the user input and adding it to the array of strings. */
    for (int i = 0; i < length; i++)
    {
        cin >> response[i];
        full += response[i];
        full += " ";
    }

    /* This is printing the full string to the console. */
    cout << "Your full string is: " << endl;
    cout << full << endl;
    }