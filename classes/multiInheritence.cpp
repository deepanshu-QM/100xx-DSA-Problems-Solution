#include <iostream>
using namespace std;

class GrandParent {
public:
    void grandParent() {
        cout << "GrandParent" << endl;
    }
};

class Parent : public GrandParent {
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

    c.grandParent();
    c.parent();
    c.child();
}