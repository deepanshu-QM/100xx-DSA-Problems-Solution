#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price = 123.45678;

    cout << fixed << setprecision(2);
    cout << "Price: " << price << endl;

    cout << setw(15) << "Name" << setw(10) << "Marks" << endl;
    cout << setw(15) << "Rahul" << setw(10) << 89.5 << endl;

    return 0;
}