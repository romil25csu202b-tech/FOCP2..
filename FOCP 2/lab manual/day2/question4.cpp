#include <iostream>
using namespace std;
int main() {
    int itemNo, quantity;
    float unitPrice, amount, discount, totalBill;
    cout << "Enter item number: ";
    cin >> itemNo;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter unit price: ";
    cin >> unitPrice;
    amount = quantity * unitPrice;
    discount = amount * 0.20;
    totalBill = amount - discount;
    cout << "\nItem Number: " << itemNo ;
    cout << "Quantity: " << quantity;
    cout << "Unit Price: " << unitPrice ;
    cout << "Amount: " << amount ;
    cout << "Discount (20%): " << discount ;
    cout << "Total Bill: " << totalBill ;   
    return 0;
}