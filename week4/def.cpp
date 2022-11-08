#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
        string name;
    public:
        Person (string x = "Patrick")
        {
            name = x;
        }
        Person (Person &one)
        {
            name = one.name;
        }
        void getName() 
        {
            cout << name << endl;
        }
};

int main()
{
    Person one, two("James"), three(two);
    one.getName();
    two.getName();
    three.getName();
    

    return 0;
}