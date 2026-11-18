#include <iostream>
using namespace std;

int main() {
    int a = 10;

    cout << "Pre-Increment: " << ++a << endl;
    cout << "Post-Increment: " << a++ << endl;

    cout << "Pre-Decrement: " << --a << endl;
    cout << "Post-Decrement: " << a-- << endl;

    cout << "Final Value: " << a << endl;

    return 0;
}