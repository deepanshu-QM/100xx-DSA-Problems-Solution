
//https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/K

#include<iostream>
using namespace std;

int main(){
    long long  n;
    cin>>n;

    while(n!=0){
        cout<<n%10;
        n = n/10;
    }
    return 0;
}
