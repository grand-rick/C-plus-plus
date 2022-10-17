#include <iostream>
using namespace std;

/**
    * Circle - Class circle
    * perimeter: find the perimerter
    * return: return the perimeter (float)

    * area: find the area
    * return: returns the area(float)
    * @author: Itsfoss
*/

class Circle
{
    public:
    float radius;
};

float perimerter(float *rad)
{
    return (3.14* 2*(*rad));
}

float area(float * rad)
{
    return (3.14 * (*rad * 2));
}

int main()
{
    Circle  circ;
    float radius, ar, per;
    int option;
    

    cout << "Whats the radius of the circle? ";
    cin >> radius;
    circ.radius = radius;


    cout << "What to culculate?\n 1.Area\n 2.Peremiter: ";
    cin >>option;
    if (option == 1)
    {
        ar = area(&radius);
        cout << "The area is " << ar << "\n"; 
    }

    else if (option == 2)
    {
        per = perimerter(&radius);
        cout << "The perimeter is " << per << "\n";
    }
    else 
    {
        cout << "I gave you two options Dummy! Lets try this again.";
        main();
    }

return(0);

}