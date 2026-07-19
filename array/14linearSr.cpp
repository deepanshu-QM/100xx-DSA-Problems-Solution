
#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i] == target)
        return i;
    }
    return -1;
}
int main(){
    int arr[] ={1,90,45,67,22,34,56,79,41,60,34};
    int size = sizeof(arr)/sizeof(int);
    int target = 22;
    int pos = LinearSearch(arr,size,target);
    cout<<"Pos : "<<pos<<endl;
    return 0;
}