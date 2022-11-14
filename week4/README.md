## Welcome to week 4 of programming in C++ 
These are the learning objective for this week, by the end of the session, you should be able to explain to anyone without the help of google the following concepts 

* [X] [Constructors in C-plus-plus](https://www.w3schools.com/cpp/cpp_constructors.asp)

### What are constructors?

Constructors in C++ are special methods with the same name as that of the class which are called automatically when an object is crated ( when a class is instantiated)

Assuming we had a class ```Student```   the simplest way to define a constructor would be 

```c++
#include <iostream>
using namespace std;
Class Student
{
    public:

        char* name;
        int rollNo;
        char* stream;

        Student()
        {
            cout << "Constructor called "
        }
};

/** the main  **/

int main(void)
{
    Student std1;

    return (0);
}

```

