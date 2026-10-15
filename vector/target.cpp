/*
Given a vector and a target, return the indices of two distinct elements whose sum equals the target. 
Assume exactly one solution exists.Example
Input: [3, 2, 4], target = 6
Output: [1, 2]*/

#include<iostream>
#include<vector>
using namespace std;

vector <int> Findindex(vector<int>& x, int target){
    for(int i=0;i<x.size();i++){
        for(int j=i+1;j<x.size();j++){
            if(x[i] + x[j] == target){
                return {i,j};
            }
        }
    }
}
int main(){
    vector<int>x = {3,4,5};
    int target = 6;

    vector<int>result = Findindex(x,target);
    
}