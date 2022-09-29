#include <iostream>
#include <string>

using namespace std;

int get_int(string s);

int main(void) {
    int pass = get_int("Passengers: ");
    int const BUS_SPACE = 50;

    int ans = BUS_SPACE - (pass % BUS_SPACE);

    cout << "Empty Seats: " << ans;
    return 0;
}

int get_int(string s) {
    int num;
    cout << s;
    cin >> num;
    return num;
}