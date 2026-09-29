
#include<iostream>
using namespace std;

# define INT_MAX 10

class Stack {
    private:
        int stack[INT_MAX];
        int top;

    public:
        Stack(){
            top = -1;
        }
        
        //Adding Element to stack
        void push(int value){
            if(top >= INT_MAX){
                cout<<"Stack_OverFlow \n";
                return;
            }
            top = top+1;
            stack[top] = value;
            cout<<"Added Element : "<<stack[top]<<endl;
        }

        //pop the value 
        void pop(){
            if(top == -1){
                cout<<"Stack_is underflow\n";
                return;
            }
            cout<<"deleted Element : "<<stack[top]<<endl;
            top--;
        }

        //Top Element on stack
        void topElm(){
            if(top == -1){
                cout<<"Stack is Empty\n"<<endl;
                return;
            }
            cout<<"Top Element :"<<stack[top]<<endl;
        }

        //Iterate  over the stack

        void iterate_stack(){
            if(top == -1){
                cout<<"Stack is Empty \n";
                return;
            }

            for(int i=top;i>=0;i--){
                cout<<stack[i]<<" ";
            }
            cout<<endl;
        }

};

int main(){
    Stack s;
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(16);
    s.push(100);

    s.pop();
    s.topElm();

    return 0;
    
}