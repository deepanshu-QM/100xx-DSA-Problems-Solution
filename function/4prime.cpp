
//https://codeforces.com/group/4vcXCPx8NY/contest/668068/problem/D

#include<iostream>
using namespace std;

void primeOrNot(int N){
    if(N == 0 || N == 1){
        cout<<"Not Prime"<<endl;
        return;
    }
    
    for(int i=2; i<N; i++){
        if(N % i == 0){
            cout<<"Not Prime"<<endl;
            return;
        }
    }
    
    cout<<"Prime"<<endl;
}

int main(){
    int N;
    cin>>N;
    primeOrNot(N);
    
    return 0;
}