#include <iostream>
using namespace std;

int main() {
    int month, year;

    cout << "Enter Month (1-12): ";
    cin >> month;

    cout << "Enter Year: ";
    cin >> year;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 Days";
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 Days";
            break;

        case 2:
            if ((year % 400 == 0) ||
                (year % 4 == 0 && year % 100 != 0)) {
                cout << "29 Days";
            } else {
                cout << "28 Days";
            }
            break;

        default:
            cout << "Invalid Month";
    }

    return 0;
}