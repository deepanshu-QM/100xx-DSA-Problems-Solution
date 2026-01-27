
//https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/J

#include<iostream>
using namespace std;

int main(){
    int x,n;
    cin>>x>>n;

    long long result = 1;
    while(n>0){
        result *= x;
        n--;
    }
    cout<<result<<endl;
    return 0;
}