
/*
1. Positive, Negative or Zero
Write a program that takes an integer and checks whether it is:
Positive
Negative
Zero

Example:
Input: -8
Output: Negative*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;

    if(n > 0) {
        cout<<"Positive"<<endl;
    }else if(n < 0){
        cout<<"Negative Number"<<endl;
    }else if(n == 0){
        cout<<"Equal to Zero"<<endl;
    }else {
        cout<<"Invalid Input"<<endl;
    }
}