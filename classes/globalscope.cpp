#include <iostream>
using namespace std;

class Student {                 // Global scope
public:
    void show() {
        cout << "Global class" << endl;
    }
};

int main() {
    Student s;
    s.show();
}