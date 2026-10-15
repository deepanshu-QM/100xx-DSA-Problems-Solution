/*
Find the largest and smallest elements in a vector without using built-in max_element() or min_element().Example
Input: [12, 5, 27, 3, 9]
Output: Maximum = 27, Minimum = 3

Hint: Initialize both variables with the first element*/

#include<iostream>
#include<vector>
using namespace std;

int Max_Min(vector<int>& x){
    int max = x[0];
    int min = x[0];
    for(int i=0;i<x.size();i++){
        if(x[i] > max)
        {max = x[i]; }

        if(x[i] < min)
        {min = x[i]; }
    }
    cout<<"Max : "<<max<<"\nMin : "<<min<<endl;
}
int main(){
    vector<int>x = {12,5,27,3,9};
    Max_Min(x);
}