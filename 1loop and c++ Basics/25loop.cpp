
//https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/G

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long x;
    int pos=0,neg=0,even=0,odd=0;

    for(int i=0;i<n;i++){
        cin>>x;

        if(x > 0)pos++;
        else if(x < 0) neg++;

        if(x % 2 == 0)even++;
        else odd++;
    }

    cout<<pos<<endl;
    cout<<neg<<endl;
    cout<<even<<endl;
    cout<<odd<<endl;

    return 0;

}