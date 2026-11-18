#include <iostream>
using namespace std;

int main() {
    char a = 'A', b = 'B';

    string str1 = "Apple";
    string str2 = "Banana";

    cout << "A > B: " << (a > b) << endl;
    cout << "A < B: " << (a < b) << endl;

    cout << "Apple == Banana: " << (str1 == str2) << endl;
    cout << "Apple < Banana: " << (str1 < str2) << endl;

    return 0;
}