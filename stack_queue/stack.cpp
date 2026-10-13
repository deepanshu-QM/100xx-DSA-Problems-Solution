
//Implementation Of stack by using the array 
//Operation : a) adding Element(push) b) Deleting element(pop) c)Display Elements d) What is Top Element

#include<iostream>
using namespace std;

const int SIZE = 6;

class Stack {
    int data[SIZE];
    int top;

    public:

    Stack(){
        top = -1;
    }

    //adding Element inside Stack :
    void push(int value){
        if(top == SIZE - 1){
            cout<<"Stack is overFlow \n"<<endl;
            return;
        }
        top++;
        data[top] = value;
        cout<<"Inserted value : "<<value<<" \n";
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is UnderFlow \n"<<endl;
            return;
        }
        cout<<"Deleted Value : "<<data[top]<<" \n";
        top--;
    }

    //Traversal Through Stack (means backward)
    void traversal(){
        if(top == -1){
            cout<<"Stack is Empty \n"<<endl;
            return;
        }
        for(int i=top;i>=0;i--){
            cout<<data[i]<<" ";
        }cout<<endl;
    }

    void peek(){
        if(top == -1){
            cout<<"Stack is Empty \n"<<endl;
            return;
        }else{
            cout<<"Top Element : "<<data[top]<<" ";
        }
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.pop();
    s.pop();

    cout<<"Elements are inside stack : "<<endl;
    s.traversal();

    s.peek();


}