
/*Find the HCF of A and B by writing a function that take A and B  as parameter and returns HCF*/

#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int ans = 1;

    for(int i=1;i<=n;i++){
        if(n % i == 0  && m % i == 0){
            ans = i;
        }
    }

    cout<<ans<<endl;
}