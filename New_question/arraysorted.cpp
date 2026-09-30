
/* Find the Given Array is Sorted or Not Sorted */
#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;

    int list[size];
    for(int i=0;i<size;i++){
        cin>>list[i];
    }

    bool flag = false;
    for(int i=1;i<size;i++){
        if(list[i] < list[i-1]){
            flag = true;
            break;
        }
    }

    if(flag){
        cout<<"Array is Not sorted "<<endl;
    }else{
        cout<<"Array is Sorted "<<endl;
    }
    return 0;
}
