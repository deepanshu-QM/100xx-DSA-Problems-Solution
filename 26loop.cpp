
//https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/I

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long fact = 1;
    while(n>0){
        fact = fact * n;              // 1*5 = 5 , 5*4, so on
        n--;
    }
    cout<<fact<<endl;

    return 0;
}