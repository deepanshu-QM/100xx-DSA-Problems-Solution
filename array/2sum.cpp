
// https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/B

#include<iostream>
using namespace std;

int main(){
    int N;
    long long sum = 0;
    cin>>N;

    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    for(int i=0;i<N;i++){
        sum += arr[i];
    }
   

    cout<<sum<<endl;

    return 0;

}