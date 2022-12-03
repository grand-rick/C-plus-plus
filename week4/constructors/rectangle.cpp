#include <iostream>
using namespace std;

/** 
 * Find the area of a rectangle using constructors
 * length - the leght of the rectangle
 * width  - the width of the reactagnle 
 *
 */

class Rect
{
public:
  float width,length;

  Rect(float w, float l)
  {
    width = w;
    length = l;
  }

  float Area(void)
  {
    return (width * length);
  }
};

int main()
{
  Rect rect(2,4);
  cout << "The width is " << rect.width << "\n";
  cout << "The lenght is " << rect.length << "\n";
  cout << "The area is " << rect.width << "*" << rect.length << "=" << rect.Area() << "\n";

  return (0);

}

  
