#include <iostream>

using namespace std;

class base {
    public:
        base()
        {
            cout << "Default of base class" << endl;
        }
        base(int b)
        {
            cout << "Parameterized of base class" << b << endl;
        }
};

class derived: public base
{
    public:
        derived():base()
        {
            cout << "Default of derived class" << endl;
        }
        derived(int z): base(z)
        {
            cout << "Parameterized of derived" << z << endl;
        }
};

int main()
{
    // derived sample1;
    derived sample2(56);

    return 0;
}