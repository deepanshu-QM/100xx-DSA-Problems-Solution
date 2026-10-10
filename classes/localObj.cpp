#include <iostream>
using namespace std;

class Student {
public:
    void show() {
        cout << "Local object" << endl;
    }
};

int main() {
    Student s;              // Local object
    s.show();
}