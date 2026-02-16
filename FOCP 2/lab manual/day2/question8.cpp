#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of events (N): ";
    cin >> n;
    cout << "\nEvent Tags:\n";
    for (int i = 1; i <= n; i++) {
        bool divisibleBy3 = (i % 3 == 0);
        bool divisibleBy5 = (i % 5 == 0);
        cout << "Event " << i << ": ";
        if (divisibleBy3 && divisibleBy5) {
            cout << "Buzz Fuzz";
        } else if (divisibleBy3) {
            cout << "Buzz";
        } else if (divisibleBy5) {
            cout << "Fuzz";
        } else {
            cout << "No tag";
        }
        cout << "\n";
    }
    return 0;
}