
#include <iostream>
using namespace std;

class Student {
private:
    int age;

public:
    void get() {
        age = 20;
    }

    void display() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s;

    s.get();       // Set the age
    s.display();   // Display the age

    return 0;
}
