#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After Swapping:" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}