#include <iostream>
using namespace std;

class Student {
public:
    void show();
};

// Function defined outside class
void Student::show() {
    cout << "Function belongs to Student" << endl;
}

int main() {
    Student s;
    s.show();
}