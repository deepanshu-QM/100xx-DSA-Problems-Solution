
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int state = 0; 

    for(char ch : str) {
        switch(state) {
            case 0: // q0
                if(ch == '0')
                    state = 1;
                else if(ch == '1')
                    state = 0;
                else {
                    cout << "Invalid Input";
                    return 0;
                }
                break;

            case 1: // q1
                if(ch == '0')
                    state = 1;
                else if(ch == '1')
                    state = 2;
                else {
                    cout << "Invalid Input";
                    return 0;
                }
                break;

            case 2: 
                if(ch == '0')
                    state = 1;
                else if(ch == '1')
                    state = 0;
                else {
                    cout << "Invalid Input";
                    return 0;
                }
                break;
        }
    }

    if(state == 2)
        cout << "Accepted";
    else
        cout << "Rejected";

    return 0;
}