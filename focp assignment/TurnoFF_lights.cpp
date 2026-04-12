#include <iostream>
using namespace std;

bool canTurnOff(string bulbs, int n, int k, int x) {
    int operations = 0;

    for (int i = 0; i < n; i++) {

        // If bulb is ON
        if (bulbs[i] == '1') {

            operations++;

            // Turn OFF next x bulbs
            for (int j = i; j < i + x && j < n; j++) {
                bulbs[j] = '0';
            }

            if (operations > k)
                return false;
        }
    }

    return true;
}

int main() {

    int n, k;
    cin >> n >> k;

    string bulbs;
    cin >> bulbs;

    int low = 1;
    int high = n;
    int ans = n;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (canTurnOff(bulbs, n, k, mid)) {
            ans = mid;
            high = mid - 1;  // try smaller x
        }
        else {
            low = mid + 1;   // need larger x
        }
    }

    cout << ans << endl;

    return 0;
}