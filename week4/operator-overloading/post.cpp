#include <iostream>

using namespace std;

class A {
    private:
        int weight;

    public:
        A (int x = 0)
        {
            weight = x;
        }
        void operator ++ (int)
        {
            weight++;
        }
        int getWeight() 
        {
            return weight;
        }
};

int main() 
{
    A person1(63);
    
    person1++;

    cout << person1.getWeight() << endl;
    
    return 0;
}