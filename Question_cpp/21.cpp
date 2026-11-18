#include <iostream>
using namespace std;

int main() {
    float marks;
    int income;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "Enter Annual Family Income: ";
    cin >> income;

    if (marks >= 80 && income <= 250000) {
        cout << "Eligible for Scholarship";
    } else {
        cout << "Not Eligible for Scholarship";
    }

    return 0;
}