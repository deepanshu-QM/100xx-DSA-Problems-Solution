
/* Swapping the Element in an array*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int list[n];
    for(int i=0;i<n;i++){
        cin>>list[i];
    }
    int i=0, j=n-1;
    while(i < j){
        swap(list[i],list[j] );
            i++;
            j--;

    }

    for(int i=0;i<n;i++){
        cout<<list[i]<<" ";
    }
}