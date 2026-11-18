#include <iostream>
using namespace std;

int main() {
    char op;
    float a, b;

    cout << "Enter Operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter Two Numbers: ";
    cin >> a >> b;

    switch (op) {
        case '+':
            cout << "Result: " << a + b;
            break;

        case '-':
            cout << "Result: " << a - b;
            break;

        case '*':
            cout << "Result: " << a * b;
            break;

        case '/':
            if (b != 0)
                cout << "Result: " << a / b;
            else
                cout << "Division by Zero Not Allowed";
            break;

        default:
            cout << "Invalid Operator";
    }

    return 0;
}