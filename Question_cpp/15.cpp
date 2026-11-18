#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Enter Temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}