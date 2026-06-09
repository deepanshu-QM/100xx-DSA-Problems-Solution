
/* https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/G */

#include<iostream>
using namespace std;

int main(){
    int n, pos = 0, neg = 0, even = 0, odd = 0;      
    cin>>n;

    long long N[n];
    for(int i=1;i<=n;i++){
        cout<<"Enter Elements : "<<endl;
        cin>>N[i];

        if(N[i] >= 0) pos++;

        else  neg++;
        
        if(N[i] % 2 == 0) even++;
        else odd ++;
    } 
    cout<<pos<<endl;
    cout<<neg<<endl;
    cout<<even<<endl;
    cout<<odd<<endl;

    return 0;

}