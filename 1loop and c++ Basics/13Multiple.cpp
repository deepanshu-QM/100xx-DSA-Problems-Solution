
//https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/L
#include<iostream>
using namespace std;

int main(){
    long long N,M;
    cin>>N>>M;

    if(M % N == 0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}