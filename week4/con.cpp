#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
        string name;
    public:
        Person (string n)
        {
            name = n;
        }

        void show ()
        {
            cout << name << endl;
        }
};

int main () {
    string input = "";
    cout << "Enter a name: ";
    cin >> input;

    Person A(input);
    A.show();

    return 0;
}



