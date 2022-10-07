#include <iostream>

using namespace std;

double getArea(float x, float y)
{
    double area = x * y;
    return area;
}

float getPerimeter(float x, float y)
{
    float perimeter = 2 * (x + y);
    return perimeter;
}

int main()
{
    float height, width;
    cout << "Input the height: ";
    cin >> height;

    cout << "Input the width: ";
    cin >> width;

    float area = getArea(height, width);
    float perimeter = getPerimeter(height, width);

    cout << "The area of the rectangle is " << area << " and it's perimeter is " << perimeter << endl;

    return 0;
}