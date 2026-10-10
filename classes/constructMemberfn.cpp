#include <iostream>
using namespace std;

class Student {
private:
    int age = 28;

public:
    void showAge() const {
        cout << age << endl;

        // age = 30;   // Not allowed inside const function
    }
};

int main() {
    Student s;
    s.showAge();
}