#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        sort(A.begin(), A.end(), greater<int>());
        map<int, int> used;
        int alex = 0;
        int bob = 0;
        bool alexTurn = true;
        for (int i = 0; i < N; i++) {
            if (used[A[i]] == 2) {
                continue;
            }
            used[A[i]]++;
            if (alexTurn) {
                alex += A[i];
            } else {
                bob += A[i];
            }
            alexTurn = !alexTurn;
        }  
        if (alex > bob) {
            cout << "Alex" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }
    return 0;
}
