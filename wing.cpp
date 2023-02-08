#include <iostream>
#include <string>

using namespace std;

int main (void)
{
    int num = 10;
    int tmp = 0;

    for (int i = 0; i < num; i++)
    {
        for (int x = 0; x < i; x++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int y = 0; y < num; y++)
    {
        for (int x = 10; x > y; x--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}