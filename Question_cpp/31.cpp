#include <iostream>
using namespace std;

int main() {
    float marks, attendance;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "Enter Attendance Percentage: ";
    cin >> attendance;

    if (attendance >= 75) {
        if (marks >= 40) {
            cout << "Student Passed";
        } else {
            cout << "Student Failed";
        }
    } else {
        cout << "Not Eligible Due to Low Attendance";
    }

    return 0;
}