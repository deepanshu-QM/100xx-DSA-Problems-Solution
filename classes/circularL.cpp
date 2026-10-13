
//Circular Linkedlist 

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

int main(){
    Node* first = new Node(11);
    Node* second = new Node(12);
    Node* third = new Node(13);

    first->next = second;
    second->next = third;
    third->next = first;

    Node* current = first;

    do {
        cout<<current->data<<" ";
        current = current->next;
    }while(current != first);
    cout<<endl;

    //free the Memory 
    current->next = nullptr;
    delete first;
    delete second;
    delete third;

    return 0;
}