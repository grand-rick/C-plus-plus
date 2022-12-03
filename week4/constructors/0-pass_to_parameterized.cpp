#include <iostream>

using namespace std;

class  Add
{
public:
  int x,y;

  Add(int v1, int v2)
  {
    x = v1;
    y = v2;
  }

  int add(int a,int b)
  {
    return (a + b);
  }

};


int main()
{
  int first, second;
  cout << "What is the value of x\n";
  cin >> first;

  cout << "What is the value of y\n";
  cin >> second;

  Add a(first, second);

  int sum = a.add(a.x, a.y);

  cout << sum << "\n";

  return (0);

}
