#include <iostream>
using namespace std;
int main() {
    int score1, score2, score3;
    cout << "Enter score for Player 1: ";
    cin >> score1;
    cout << "Enter score for Player 2: ";
    cin >> score2;
    cout << "Enter score for Player 3: ";
    cin >> score3;
    if (score1 > score2 && score1 > score3) {
        cout << "Player 1 wins with score: " << score1;
    } else if (score2 > score1 && score2 > score3) {
        cout << "Player 2 wins with score: " << score2 ;
    } else if (score3 > score1 && score3 > score2) {
        cout << "Player 3 wins with score: " << score3 ;
    } else {
        cout << "It's a tie!" ;
    }
    return 0;
}