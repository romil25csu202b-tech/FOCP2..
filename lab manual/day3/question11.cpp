#include <iostream>
using namespace std;
int main() {
    int quantity;
    double pricePerItem, totalExpense;
    cout << "Enter quantity of items: ";
    cin >> quantity;
    cout << "Enter price per item: ";
    cin >> pricePerItem;
    totalExpense = quantity * pricePerItem;
    if (quantity > 1000) {
        totalExpense = totalExpense * 0.9; 
        cout << "\n10% discount applied!" ;
    }
    cout << "Total expense: " << totalExpense ;
    return 0;
}