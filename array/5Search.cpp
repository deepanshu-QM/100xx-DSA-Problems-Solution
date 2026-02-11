
// https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/E

#include<iostream>
using namespace std;

int main(){
    long long N,X;
    cin>>N>>X;

    long long arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    bool found = false;
    for(int i=0;i<N;i++){
        if(arr[i] == X){
            found = true;
            break;
        }
    }

    if(found){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;

}