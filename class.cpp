#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int x = 10;
        float y = 28.54;
    public:
        float area(int x, float y)
        {
            float area = x * y;
            return area;
        }
};

int main()
{
    Rectangle A;

    float area = A.area(10, 12);
    cout << "The area is " << area << endl;

    return 0;
}