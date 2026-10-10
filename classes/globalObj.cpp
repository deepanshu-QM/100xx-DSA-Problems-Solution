#include <iostream>
using namespace std;

class Student {
public:
    void show() {
        cout << "Global object" << endl;
    }
};

Student globalStudent;      // Global object

int main() {
    globalStudent.show();
}