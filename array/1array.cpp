
//simple Format of the array
#include<iostream>
using namespace std;

int main(){
    int N,i;
    cin>>N;
    
    int arr[N];
    for(i=1;i<=N;i++){
        cin>>arr[i];
    }cout<<endl;

    //display 
    cout<<"Elements are : "<<endl;
    for(i=1;i<=N;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}