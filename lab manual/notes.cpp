#include <iostream>
using namespace std;

int a, b, sum;

void getdata() {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}

void display() {
    sum = a + b;
    cout << "Sum is " << sum << endl;
}

int main() {
    getdata();
    display();
    return 0;
}
// // there are two ways to define a class first is we can declare the class which consist of data members and member functions
// member functions are defined outside the class by using scope resolution operator we can define the class by declaring data members and member funcitons inside the class 
// the member functions are also inside the class in this method we do not need the scope resolution operator
// in c and c++ the execution of the program starts from the main function only
#include <iostream>
using namespace std;
class addition {
    int num1, num2;
    int sum;
public:
    void getdata() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }
    void sumNumber() {
        sum = num1 + num2;
        cout << "the Sum of two number is : " << sum;
    }
};
int main() {
    addition add; // object creation
    add.getdata(); // calling member function using the object
    add.sumNumber(); // calling member function using the object
    return 0;
}
// write a program to check whether a indian citizen is eligible to vote or not using classes and objects.
// when we are takingthe string input immediately after any other data type input we need to use
// the cin.ignore
#include <iostream>
#include <string>
using namespace std;
int main() {
    int number;
    string name;
    cout << "Enter num: ";
    cin >> number;
    cin.ignore();
    getline(cin, name);
    // etc
}
