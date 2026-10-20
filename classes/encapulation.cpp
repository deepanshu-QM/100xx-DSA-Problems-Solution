

#include <iostream>
using namespace std;

class Student {
private:
    int age;  // Hidden data

public:
    void setAge(int a) {
        if (a > 0) {
            age = a;
        }
    }

    int getAge() {
        return age;
    }
};

int main() {
    Student s;

    s.setAge(20);
    cout << "Student age: " << s.getAge() << endl;

    return 0;
}
