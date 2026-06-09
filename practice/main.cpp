
/*
ou are given a positive integer n
.

Print the integers from 1
 to n
 (inclusive), each on a separate line.

Input
The input contains a single integer n
 (1≤n≤2⋅105)
.

Output
Print n
 lines. On the i
-th line, output the integer i
 (1≤i≤n)
.*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
    return 0;
}