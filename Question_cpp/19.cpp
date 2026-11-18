#include <iostream>
using namespace std;

int main() {
    bool a = true;
    bool b = false;

    cout << "A AND B: " << (a && b) << endl;
    cout << "A OR B: " << (a || b) << endl;
    cout << "NOT A: " << (!a) << endl;
    cout << "NOT B: " << (!b) << endl;

    return 0;
}