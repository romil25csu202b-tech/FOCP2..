#include <iostream>
using namespace std;
int main() {
    double side1, side2, side3;
    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is EQUILATERAL (all three sides are equal)" ;
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "The triangle is ISOSCELES (two sides are equal)" ;
        }
        else {
            cout << "The triangle is SCALENE (all three sides are different)" ;
        }
    }
    else {
        cout << "Invalid triangle! The sum of any two sides must be greater than the third side." ;
    }
    return 0;
}