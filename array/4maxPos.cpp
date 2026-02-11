
// https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/D

#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    long long arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    long long maxElm = arr[0];
    int pos = 0;
    for(int i=0;i<N;i++){
        if(arr[i] > maxElm){
            maxElm = arr[i];
            pos = i;
        }
    }
    cout<<maxElm<<" "<<pos+1<<endl;

    return 0;
}