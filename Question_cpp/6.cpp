#include <iostream>
using namespace std;

int main() {
    int a = 10;
    double b = a;

    double x = 15.75;
    int y = (int)x;

    cout << "Implicit Conversion: " << b << endl;
    cout << "Explicit Conversion: " << y << endl;

    return 0;
}