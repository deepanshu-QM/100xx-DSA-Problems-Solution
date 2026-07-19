
/* [pass By Refrence ] , If we tRY TO change the values of an array by passing in to a function as arguments , then
that Changes will Reflect on the orignal array , Means Its Orignal elements will Change (On address)*/

#include<bits/stdc++.h>
using namespace std;

void ChangingElement(int arr[], int size){
    for(int i=0;i<size;i++){
        arr[i] = arr[i] * 2;
    }
}
int main(){
    int arr[] = {2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);

    ChangingElement(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}