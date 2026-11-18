#include <iostream>
using namespace std;

int main() {
    int num, digit;
    int sum = 0;

    cout << "Enter a Number: ";
    cin >> num;

    if (num < 0)
        num = -num;

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    cout << "Sum of Digits: " << sum;

    return 0;
}