
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {
    Node* first = new Node(11);
    Node* second = new Node(12);
    Node* third = new Node(55);

    first->next = second;
    second->next = third;

    Node* current = first;

    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;

    delete first;
    delete second;
    delete third;

    return 0;
}
