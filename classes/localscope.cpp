#include <iostream>
using namespace std;

void test() {

    class LocalClass {
    public:
        void show() {
            cout << "Local class" << endl;
        }
    };

    LocalClass obj;
    obj.show();
}

int main() {
    test();
}