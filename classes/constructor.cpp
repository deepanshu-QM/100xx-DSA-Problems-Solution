#include <iostream>
using namespace std;

class Student {
public:
    string name;

    Student() {
        name = "Deepanshu";     // Constructor runs automatically
    }
};

int main() {
    Student s;

    cout << s.name << endl;
}