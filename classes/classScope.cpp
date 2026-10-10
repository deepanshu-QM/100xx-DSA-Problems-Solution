#include <iostream>
using namespace std;

class Student {
    int age = 28;       // Class scope

public:
    void show() {
        cout << age << endl;
    }
};

int main() {
    Student s;
    s.show();
}