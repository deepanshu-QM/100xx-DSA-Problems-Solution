
//https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/C

#include<iostream>
using namespace std;

int main(){
    long long i,n;
    cin>>n;

    i=1;
    while(i<=n){
        if(i % 2 == 0){
            cout<<i<<" ";
        }
        i++;
    }
    return 0;

}