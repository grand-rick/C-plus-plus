<h2 align="center"> Welcome to week 4 of programming in C++ </h2>
These are the learning objective for this week, by the end of the session, you should be able to explain to anyone without the help of google the following concepts 


<br>
<br>

## Constructors

* [X] [Constructors in C-plus-plus](https://www.w3schools.com/cpp/cpp_constructors.asp)
* [X] [Inheritance in C-plus-plus](https://www.programiz.com/cpp-programming/inheritance)
* [X] [Operator overloading](https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm)

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

If we compile and run the above program, the output will be  *__Constructor called__*. This is because the method Student() is called automaticaly an object of class Student is created, if we created  as many as a thousand objects of the Student class, the phrase *__Constructor called__*  would be printed to standard output a thousand times because the constructor is called each time an object is created. 

Note that contructors are always public and have no return type.


* [X] [Types of constructors](https://www.google.com/search?q=types+of+constructors+in+cpp) 

    * [Default Constructors](https://www.geeksforgeeks.org/default-constructors-in-cpp/)
    * [Parameterized constructors](https://www.educba.com/parameterized-constructor-in-c-plus-plus/)
    * [Copy Constructors](https://www.geeksforgeeks.org/copy-constructor-in-cpp/)


<br>

Just to recap what we have covered, 
* Constructors can only be public
* Constructors are not inherited under normal circumstances
* Constructors have no data type. Constructors can’t return any value. Even we can’t use void for the constructor.
* Constructors can have arguments
* The Constructor can’t be referred by its address.

[Exercises](../.exercises/week4-exercises.md)


## Inheritance 
According to [IBM](https://www.ibm.com/docs/en/zos/2.4.0?topic=reference-inheritance-c-only), Inheritance is a mechanism of reusing and extending existing classes without necesarrily modifying them. What this means is that inhertance is a process by which a derived class acquries the properties and characteristics of a base class. 

__Base Class__  is the class whose members and  methods ( properties and characteristics are to be inherited)

__Derived Class__ is the class that inherits the properties of the Base class.


## Why Inheritance 


Consider a group of vehicles, you want to create class for the different types of vehicles available i.e Bus, Car and Truck.

All of these vehicles have some similarities, they all need to be fueld, serviced and they all have a certain capacity they can carry. If we were to implement this without using classes, we would end up writting the same code for these features for the different classes.  Using Inhertance however, we can just create a base class Vehicle and create child classes from that with the specifics that match each vehicle. This would reduce redundancy of code and allow code reusability.

### Implementing inheritance 

The general overview of inheritance is 

```
class BaseClass
{
    //code here
}

class ChildClass : access_modifier Baseclass
{
    //some code here
}

```


here is an example

```c++
Class Animal
{

    public: 
        char* name;
        int age;

        char*   eat(void)
        {
            return ("Eating");
        }

        int grow(int moreAge)
        {
            age += moreAge;
            return(age);
        }

        void getName()
        {
            cout << name << "is the Name\n";
        }
};

class Mammals : public Animal
{

};


```

### Modes of inheritance 
In C++ inheritance, we can derive a child class from the base class in different access modes, which defines how the class members and functions can be accessed.

1. __Public inheritance__ makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.

 ```c++

 // C++ program to demonstrate the working of public inheritance

#include <iostream>
using namespace std;

class Base {
  private:
    int pvt = 1;

  protected:
    int prot = 2;

  public:
    int pub = 3;

    // function to access private member
    int getPVT() {
      return pvt;
    }
};

class PublicDerived : public Base {
  public:
    // function to access protected member from Base
    int getProt() {
      return prot;
    }
};

int main() {
  PublicDerived object1;
  cout << "Private = " << object1.getPVT() << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.pub << endl;
  return 0;
}

 ```


2. __Protected inheritance__ makes the public and protected members of the base class protected in the derived class.


```c++

// C++ program to demonstrate the working of protected inheritance

#include <iostream>
using namespace std;

class Base {
  private:
    int pvt = 1;

  protected:
    int prot = 2;

   public:
    int pub = 3;

    // function to access private member
    int getPVT() {
      return pvt;
    }
};

class ProtectedDerived : protected Base {
  public:
    // function to access protected member from Base
    int getProt() {
      return prot;
    }

    // function to access public member from Base
    int getPub() {
      return pub;
    }
};

int main() {
  ProtectedDerived object1;
  cout << "Private cannot be accessed." << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.getPub() << endl;
  return 0;
}

```

3. __Private inheritance__ makes the public and protected members of the base class private in the derived class.