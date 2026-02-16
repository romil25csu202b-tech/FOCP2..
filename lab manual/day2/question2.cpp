#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double radius;
    cout << "Enter the radius of the circular fountain: ";
    cin >> radius;
    if (radius < 0) {
        cout << "Radius cannot be negative!";
        return 1;
    }
    double area = M_PI * radius * radius;
    cout << "Area of the circular fountain: " << area << " square units" ;
    return 0;
}