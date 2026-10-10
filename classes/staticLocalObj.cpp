#include <iostream>
using namespace std;

class Counter {
public:
    Counter() {
        cout << "Constructor" << endl;
    }

    ~Counter() {
        cout << "Destructor" << endl;
    }
};

void test() {

    static Counter obj;     // Created only once

    cout << "Inside function" << endl;
}

int main() {
    test();
    test();
}