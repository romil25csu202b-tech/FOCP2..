#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year. February has 29 days." ;
    } else {
        cout << year << " is not a leap year. February has 28 days." ;
    }
    return 0;
}