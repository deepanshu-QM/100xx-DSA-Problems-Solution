
//https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/K
#include<iostream>
using namespace std;

int main(){
    long long N,F;
    cin>>N>>F;

    if(N % F == 0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}