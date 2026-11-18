#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (b != 0) {
        cout << "Quotient: " << a / b << endl;
        cout << "Remainder: " << a % b << endl;
    } else {
        cout << "Division by zero is not allowed";
    }

    return 0;
}