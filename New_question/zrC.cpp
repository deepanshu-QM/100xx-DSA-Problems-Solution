
/* Print Zeros Count  and 1 's count in an array*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c0 = 0, c1= 0;

    int list[n];
    for(int i=0;i<n;i++){
        cin>>list[i];
    }
    
    for(int i=0;i<n;i++){
        if(list[i] == 0){
            c0++;
        }else{
            c1++;
        }
    }
    cout<<"0's Count : "<<c0<<endl;
    cout<<"1's Count : "<<c1<<endl;

    return 0;
}