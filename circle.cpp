#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.142;

// Function to calculate area
double findArea(double x)
{
    double ans = PI * pow(x, 2);
    return ans;
}

// Function to calculate circumference
double findCircumference(double y)
{
    double ans = PI * (2 * y);
    return ans;
}

int main()
{
    // Program to compute the area and circumference of a circle
    double radius, area, circumference;

    cout << "Enter the radius: ";
    cin >> radius;

    // Calculating the area
    area = findArea(radius);
    cout << "The area of a circle of radius " << radius << " is " << area << endl;

    // Calculating the circumference
    circumference = findCircumference(radius);
    cout << "The circumference of a circle of radius " << radius << " is " << circumference << endl;
    
    return 0;
}