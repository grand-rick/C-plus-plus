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
        A operator + (A w2) 
        {
            return weight += w2.weight;
        }
        int getWeight() 
        {
            return weight;
        }
};

int main() 
{
    A person1(63);
    A person2(72);
    A total;

    // total = person1.addWeight(person2);
    // cout << total.getWeight() << endl;
    // total = person2.addWeight(person1);
    // cout << total.getWeight() << endl;
    total = person1 + person2;
    cout << total.getWeight() << endl;
    return 0;
}