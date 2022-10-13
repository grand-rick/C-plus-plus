#include <iostream>

using namespace std;

class Grades
{
    private:
        float mark, total, mean;
        char grade = 'A';
    
    public:
        float input_mark();
        float get_mean(float a, float b, float c);
        char get_grade(float mean);
};


int main()
{
    Grades one;
    float mark1 = one.input_mark();
    float mark2 = one.input_mark();
    float mark3 = one.input_mark();

    float mean = one.get_mean(mark1, mark2, mark3);

    char grade = one.get_grade(mean);

    cout << "Your mean is: " << mean << endl;
    cout << "Your grade is: " << grade << endl;

    return 0;
}







float Grades::input_mark()
{
    float mark = 0.0f;
    cout << "Enter a mark within 0-100: ";
    cin >> mark;
    return mark;
}

float Grades::get_mean(float a, float b, float c)
{
    total = a + b + c;
    mean = total / 3;
    return mean;
}

char Grades::get_grade(float mean)
{
    char grade = 'X';

    if (mean >= 0 && mean < 40)
    {
        grade = 'E';
    } else if (mean >= 40 && mean < 50)
    {
        grade = 'D';
    } else if (mean >= 50 && mean < 60)
    {
        grade = 'C';
    } else if (mean >= 60 && mean < 70)
    {
        grade = 'B';
    }

    return grade;
}