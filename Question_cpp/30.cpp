#include <iostream>
using namespace std;

int main() {
    int balance, amount;

    cout << "Enter Account Balance: ";
    cin >> balance;

    cout << "Enter Withdrawal Amount: ";
    cin >> amount;

    if (amount > 0) {
        if (amount <= balance) {
            if (amount % 100 == 0) {
                balance -= amount;
                cout << "Withdrawal Successful" << endl;
                cout << "Remaining Balance: " << balance;
            } else {
                cout << "Enter Amount in Multiples of 100";
            }
        } else {
            cout << "Insufficient Balance";
        }
    } else {
        cout << "Invalid Withdrawal Amount";
    }

    return 0;
}