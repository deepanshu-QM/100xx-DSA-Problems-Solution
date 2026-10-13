
//Implementation of Queue using Array
//a)Enqueu b)Dequeu c)Traversal/display

#include<iostream>
using namespace std;

const int SIZE = 6;
class Queue {
    int data[SIZE];
    int front,rear;

    public:
    Queue(){
        front = 0;
        rear = -1;
    }

    void Enqueue(int value){
        if(rear == SIZE - 1){
            cout<<"Queue is OverFlow \n"<<endl;
            return;
        }
        rear++;
        data[rear] = value;
        cout<<"Enqueue : "<<value<<" \n";
    }
    void Dequeue(){
        if(front > rear){
            cout<<"Queue is Underflow \n"<<endl;
            return;
        }
        cout<<"Dequeue : "<<data[front]<<" \n";
        front++;

    }

    void Traversal(){
        if(front > rear){
            cout<<"Queue is UnderFlow \n"<<endl;
            return;
        }
        for(int i=front;i <= rear;i++){
            cout<<data[i]<<" ";
        }cout<<endl;

    }


};

int main(){
    Queue q;
    q.Enqueue(11);
    q.Enqueue(12);
    q.Enqueue(13);
    q.Enqueue(14);
    q.Enqueue(15);
    q.Enqueue(16);

    q.Dequeue();
    q.Dequeue();

    cout<<"Element in Queue : "<<endl;
    q.Traversal();

    return 0;
}