#include <iostream>
using namespace std;

class Student {
public:
    string name;
};

int main() {
    Student s;              // Object creation
    s.name = "Deepanshu";

    cout << s.name << endl;
}