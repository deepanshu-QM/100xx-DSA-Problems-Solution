
#include <iostream>
using namespace std;

int main() {
    int amount = 289;
    int coins[] = {100, 50, 20, 10, 5, 1};

    for(int i = 0; i < 6; i++) {
        while(amount >= coins[i]) {
            amount -= coins[i];
            cout << coins[i] << " ";
        }
    }
}