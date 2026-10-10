#include <iostream>

namespace University {

class Student {
public:
    void show() {
        std::cout << "University::Student" << std::endl;
    }
};

}

int main() {

    University::Student s;    // Namespace scope
    s.show();
}