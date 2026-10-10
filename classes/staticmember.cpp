#include <iostream>
using namespace std;

class Student {
public:
    static int count;

    Student() {
        count++;
    }
};

// Static member must be defined outside the class
int Student::count = 0;

int main() {
    Student a;
    Student b;
    Student c;

    cout << Student::count << endl;
}