#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long L, R;
    while (cin >> L >> R) {
        long long result = (R+1)/2 - L/2;
        if (result % 2 == 0) {cout << "even" << endl;} 
		else {cout << "odd" << endl;}
    }
    return 0;
}