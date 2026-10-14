/*Take n integers as input and calculate their total sum.Example
Input: [2, 4, 6, 8]
Output: 20

Hint: Initialize sum = 0 and add each element. */

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>x = {2,4,6,8};
    int sum = 0;
    for(int i=0;i<x.size();i++){
        sum += x[i];
    }
    cout<<sum<<endl;
}