#include <iostream>
using namespace std;

#define PI 3.14159

int main() {
    const double radius = 5;

    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}