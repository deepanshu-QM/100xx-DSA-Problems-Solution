#include <iostream>
using namespace std;

class Parent {
public:
    void parent() {
        cout << "Parent" << endl;
    }
};

class Child : public Parent {
public:
    void child() {
        cout << "Child" << endl;
    }
};

int main() {
    Child c;

    c.parent();
    c.child();
}