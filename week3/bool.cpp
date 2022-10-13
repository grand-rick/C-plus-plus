#include <iostream>
#include <typeinfo> 

using namespace std;

int main()
{
    float num = 10.6f;
    double no = 10.372110;

    cout << typeid(num).name() << endl;
    cout << typeid(no).name() << endl;

    return 0;
}