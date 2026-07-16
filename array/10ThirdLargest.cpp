#include <bits/stdc++.h>
using namespace std;

int  SecondLargestNumber(int arr[] ,int size){
    int largest = INT_MIN;
    int Secondlargest = INT_MIN;
    int Thirdlargest = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i] > largest){
            Thirdlargest = Secondlargest;
            Secondlargest = largest;
            largest = arr[i];
        }else if(arr[i] > Secondlargest && arr[i] != largest){
            Thirdlargest = Secondlargest;
            Secondlargest = arr[i];
        }else if(arr[i] > Thirdlargest && arr[i] != Secondlargest && arr[i] != largest){
            Thirdlargest = arr[i];
        }
    }
    return Thirdlargest;
}
int main() {
	int size;
	cin>>size;
	
	int arr[size] = {21,90,45,67,89,32,48,66,40};
	int res = SecondLargestNumber(arr ,size);
	cout<<res<<endl;
	return 0;
}
