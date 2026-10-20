
#include <iostream>
using namespace std;

class A {
public:
    int x = 100;
};

class B {
public:
    void display() {
        A obj;  // Create object of class A
        cout << obj.x;
    }
};

int main() {
    B b;
    b.display();

    return 0;
}