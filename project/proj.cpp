#include <iostream>
#include <string>

using namespace std;

class Student 
{
    private:
        string name;
        int age;
        string admissionNo;
        float mark1, mark2, mark3;
        float mean;
        char grade;

    public:
        void input();
        void getGrade();
        void output();
};



int main()
{
    Student one, *b;

    b = &one;

    b->input();
    b->getGrade();
    b->output();

    return 0;
}

void Student::input()
{
    cout << "Enter name: ";
    cin >> name;

    cout << "Enter admission number: ";
    cin >> admissionNo;

    cout << "Enter three subject marks: ";
    cin >> mark1 >> mark2 >> mark3;
}

void Student::getGrade()
{
    mean = (mark1 + mark2 + mark3) / 3.0;
    
    if (mean >= 80 && mean < 101)
    {
        grade = 'A';
        cout << "Very good" << endl;
    } else if (mean >= 60 && mean < 80)
    {
        grade = 'B';
        cout << "Good" << endl;
    } else 
    {
        grade = 'C';
        cout << "Fair" << endl;
    }
}

void Student::output()
{
    cout << "Your name is " << name << endl;
    cout << "Admission Number: " << admissionNo << endl;

    cout << "Your mean is: " << mean << endl;
    cout << "Your grade is : " << grade << endl;
}