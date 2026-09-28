#include <iostream>
using namespace std;

#define INT_MAX 10

class Stack {
private:
    int stk[INT_MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    // Adding element into stack
    void push(int x) {
        if (top >= INT_MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }

        top++;
        stk[top] = x;

        cout << x << " : Pushed into Stack\n";
    }

    // Remove element from stack
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }

        cout << stk[top] << " : Pop from Stack\n";
        top--;
    }

    // Top element
    void peek() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return;
        }

        cout << "Top Element: " << stk[top] << endl;
    }

    // Display stack
    void display() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return;
        }

        for (int i = top; i >= 0; i--) {
            cout << stk[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(21);
    s.push(22);
    s.push(23);
    s.push(90);

    s.pop();

    s.peek();

    s.display();

    return 0;
}