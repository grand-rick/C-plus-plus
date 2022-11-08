#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        string name = "";
        string admissionNumber = "";

    public:
        Student(string n, string adm) {
            name = n;
            admissionNumber = adm;
        }
        void output() {
            cout << "Your name is " << name << endl;
            cout << "Your admission number is " << admissionNumber << endl;
        }
};

int main () {
    string name = "" ;
    string adm = "";
    
    cout << "Enter name and admission number: ";
    cin >> name >> adm;

    Student one(name, adm);

    one.output();

    return 0;
}