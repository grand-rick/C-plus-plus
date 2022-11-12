#include <iostream>

using namespace std;

class Rectangle {
    public:
        int length;
        int width;

    void show()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }

    int getArea()
    {
        return length * width;
    }
};

class Cuboid: public Rectangle {
    public:
        int height;

        void display()
        {
            cout << "Height: " << height << endl;
        }

        int getVolume()
        {
            return getArea() * height;
        }
};

int main() {
    Cuboid c;

    c.length = 10;
    c.width = 20;
    c.height = 30;

    c.show();
    c.display();

    cout << c.getArea() << endl;
    cout << c.getVolume() << endl;

    return 0;
}