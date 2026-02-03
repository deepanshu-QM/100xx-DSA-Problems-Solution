
//https://codeforces.com/group/4vcXCPx8NY/contest/668068/problem/C

#include<iostream>
using namespace std;

void factor(int N){
    for(int i=N;i>0;i--){
        if(N % i == 0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int N;
    cin>>N;
    factor(N);

    return 0;
}