#include <iostream>
#include <cmath>

using namespace std;

class Circle
{
    private:
        float radius, area, circumference;
        const float PI = 3.142;

    public:
        float getArea()
        {
            cout << "Enter a radius: ";
            cin >> radius;
            float area = PI * pow(radius, 2);
            return area;
        }

        float getCircumference()
        {
            cout << "Enter a radius: ";
            cin >> radius;

            float circ = PI * (2 * radius);
            return circ;
        }
};



int main()
{
    Circle one;
    float area = one.getArea();

    cout << "The area is " << area << endl;

    float circumference = one.getCircumference();
    cout << "The circumference is " << circumference << endl;

    return 0;
}