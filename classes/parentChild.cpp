#include <iostream>
using namespace std;

class Parent {
public:
    void parentFunction() {
        cout << "Parent function" << endl;
    }
};

class Child : public Parent {
public:
    void childFunction() {
        cout << "Child function" << endl;
    }
};

int main() {

    Parent p;       // Parent object
    Child c;        // Child object

    p.parentFunction();

    c.parentFunction();     // Child can access parent
    c.childFunction();
}