#include <iostream>
using namespace std;

int main() {
    string name;
    int rollNo;
    float marks;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "\nStudent Details" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNo << endl;
    cout << "Marks: " << marks << endl;

    return 0;
}