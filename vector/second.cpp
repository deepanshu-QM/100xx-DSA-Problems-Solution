/*
Create a vector containing 5 integers. Display all elements using a for loop.Example
Input: 10 20 30 40 50
Output: 10 20 30 40 50

Hint: Use vector<int>, push_back(), and a loop.*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>x = {10,20,30,40,50};
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }

    return 0;
}