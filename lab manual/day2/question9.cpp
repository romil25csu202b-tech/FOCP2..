#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char input;
    cout << "Enter a character: ";
    cin >> input;
    if (isdigit(input)) {
        cout << input << " is a number." ;
    }
    else if (isalpha(input)) {
        input = tolower(input);
        if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u') {
            cout << input << " is a vowel." ;
        }
        else {
            cout << input << " is a consonant." ;
        }
    }
    else {
        cout << "Invalid input.";
    }
    return 0;
}