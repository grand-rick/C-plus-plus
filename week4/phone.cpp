#include <iostream>
#include <string>

using namespace std;

class Phone
{
    private:
        string name;
        int RAM;
        string processor;
        string battery;

    public:
        Phone(string argname = "Null", int argRAM = 0, string argprocessor = "Null", string argbattery = "Null")
        {
            name = argname;
            RAM = argRAM;
            processor = argprocessor;
            battery = argbattery;
        }
        Phone (Phone &phone)
        {
            name = phone.name;
            RAM = phone.RAM;
            processor = phone.processor;
            battery = phone.battery;
        }
        void getData()
        {
            cout << name << endl;
            cout << RAM << endl;
            cout << processor << endl;
            cout << battery << endl;
        }
};

int main()
{
    Phone phone1, phone2("Nokia", 8, "SnapDragon", "5000mAH"), phone3(phone2);
    phone1.getData();
    phone2.getData();
    phone3.getData();

    return 0;
}