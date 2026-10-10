

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node*next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

class Linkedlist {
    public:
    Node*head;

    Linkedlist(){
        head = nullptr;
    }

    void insertElement(int value){
        Node*newNode = new Node(value);         //it is an way of define Object of an class by pasing value

        if(head == nullptr){
            head = newNode;
            return;
        }
        //go to last node

        Node*temp = head;
        if(temp->next != nullptr){
            temp = temp->next;
        }

        //connect the last node with  temp
        temp->next = newNode;
    }

    //Removing the Element fro linked list
    void RemoveElement(int value){
        if(head == nullptr){
            return;
        }

        if(head->data == value){
            Node*temp = head;    //here we transfer the value of head[node 1 to temp]
            head = head->next;        //here we transfer the head to next Node
            delete temp;
            return;
        }
    }

    //If You want to traverse on an Linked list
    void traverse(){
        Node*temp = head;

        while(temp != nullptr){
            cout<<temp->data<<" -> ";
            
        }
    }

};

int main(){

}