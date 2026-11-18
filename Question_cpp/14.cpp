#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, interest;

    cout << "Enter Principal Amount: ";
    cin >> principal;

    cout << "Enter Rate: ";
    cin >> rate;

    cout << "Enter Time: ";
    cin >> time;

    interest = (principal * rate * time) / 100;

    cout << "Simple Interest: " << interest << endl;

    return 0;
}