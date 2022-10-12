#include <iostream>
#include <string>
using namespace std;

/**
    * main - print the size in byte of the common datatypes
    * return: (0)
*/
int main(void)
{
    cout << "Size of int type is: " << sizeof(int) << "\n";
    cout << "Size of bool type is: " << sizeof(bool) << "\n";
    cout << "Size of string type is: " << sizeof(string) << "\n";
    cout << "Size of char type is: " << sizeof(char) << "\n";
    cout << "Size of float type is: " << sizeof(float) << "\n";
    cout << "Size of double type is: " << sizeof(double) << "\n";

    /**
    * Note that the size of the types 
    * Depends on the compiler and 
    * the platform on which the program is run 
    */

    return (0);
}