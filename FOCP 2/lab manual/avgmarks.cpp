#include <iostream>
using namespace std;
int main() {
    int n;
    float sum = 0, avg;    
    cout << "Enter number of subjects: ";
    cin >> n;
    for (int i = 1; i <= 5; i++) {
        float marks;
        cout << "Enter marks for subject " << i << ": ";
        cin >> marks;
        sum += marks;
    }
    avg = sum / n;
    cout << "\nTotal Marks: " << sum ;
    cout << "Average Marks: " << avg ;
    return 0;
}