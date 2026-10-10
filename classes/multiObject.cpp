#include <iostream>
using namespace std;

class Student {
public:
    string name;
};

int main() {
    Student s1;
    Student s2;
    Student s3;

    s1.name = "Aman";
    s2.name = "Rahul";
    s3.name = "Deepanshu";

    cout << s1.name << endl;
    cout << s2.name << endl;
    cout << s3.name << endl;
}