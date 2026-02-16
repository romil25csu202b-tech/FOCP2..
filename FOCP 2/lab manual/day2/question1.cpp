#include <iostream>
using namespace std;
int main() {
    float marks1, marks2, marks3, average;
    cout << "Enter marks for student 1: ";
    cin >> marks1;
    cout << "Enter marks for student 2: ";
    cin >> marks2;
    cout << "Enter marks for student 3: ";
    cin >> marks3;
    average = (marks1 + marks2 + marks3) / 3.0;
    cout << "Average marks: " << average;
    return 0;
}