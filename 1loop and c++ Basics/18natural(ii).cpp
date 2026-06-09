
/* https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/H */
#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;

    for(int i=0;i<=n;i++){
        sum += i;
    }
    cout<<sum<<endl;
}