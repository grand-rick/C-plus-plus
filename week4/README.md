<h2 align="center"> Welcome to week 4 of programming in C++ </h2>
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

If we compile and run the above program, the output will be  *__Constructor called__* this is because the method Student() is called automaticaly any object of class Student is created, if we created  as many as a thousand objects of the Student class, the phrase *__Constructor called__*  would be printed to standard output a thousand times because the constructor is called each time an object is created. 

Note that contructors are always public and have no return type.


* [X] Types of constructors 

    * [Default Constructors](https://www.geeksforgeeks.org/default-constructors-in-cpp/)
    * [Parameterized constructors](https://www.educba.com/parameterized-constructor-in-c-plus-plus/)
    * [Copy Constructors]()