
//https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/N

#include<iostream>
using namespace std;

int main(){
    long long n,temp,digit;
    cin>>n;

    digit = 0;
    temp = n;
    while(n!=0){
        digit = (digit *10)+(n%10);
        n = n/10;
    }

    if(temp == digit){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}