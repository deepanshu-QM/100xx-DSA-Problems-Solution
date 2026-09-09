/*
2. Even or Odd

Take an integer and determine whether it is even or odd.

Example:
Input: 17
Output: Odd   */


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;
    if (n %2 == 0){
        cout<<"Even"<<endl;
    }else {
        cout<<"Odd"<<endl;
    }
}