#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cout << "Enter a Number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial Not Defined for Negative Numbers";
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        cout << "Factorial: " << factorial;
    }

    return 0;
}