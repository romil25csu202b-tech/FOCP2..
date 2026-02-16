#include <iostream>
using namespace std;
int main() {
    int numEmployees;
    float basicSalary, bonus, netSalary;
    const float BONUS_PERCENT = 0.12;
    cout << "Enter number of employees: ";
    cin >> numEmployees;
    for (int i = 1; i <= numEmployees; i++) {
        cout << "\nEmployee " << i << ":" ;
        cout << "Enter basic salary: ";
        cin >> basicSalary;
        bonus = basicSalary * BONUS_PERCENT;
        netSalary = basicSalary + bonus;
        cout << "Bonus (12%): " << bonus ;
        cout << "Net Salary: " << netSalary ;
    }
    return 0;
}