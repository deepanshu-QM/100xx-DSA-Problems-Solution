#include <iostream>
using namespace std;

class Outer {
public:

    class Inner {
    public:
        void show() {
            cout << "Inside Inner class" << endl;
        }
    };
};

int main() {
    Outer::Inner obj;       // Access nested class
    obj.show();
}