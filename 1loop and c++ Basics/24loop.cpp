
//https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/H

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long sum = 0;
    while(n>0){
        sum = sum + n;
        n--;
    }
    cout<<sum<<endl;

    return 0;
}