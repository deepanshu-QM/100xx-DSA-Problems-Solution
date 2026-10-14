#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,22,3,4,5,6,7,8,9};
    
    nums.push_back(12);
    nums.push_back(100);
    nums.push_back(56);
    
    //let size 
    cout<<"Size : "<<nums.size()<<endl;
    
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}