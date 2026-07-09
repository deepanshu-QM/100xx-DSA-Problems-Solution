/*  https://www.geeksforgeeks.org/problems/reverse-a-string/1
You are given a string s, and your task is to reverse the string.

Examples:

Input: s = "Geeks"
Output: "skeeG"
Input: s = "for"
Output: "rof"
Input: s = "a"
Output: "a"
Constraints:
1 <= s.size() <= 106
s contains only alphabetic characters (both uppercase and lowercase).

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,temp;
    getline(cin,s);
    for(int i=s.size()-1;i>=0;i--){
        temp.push_back(s[i]);
    }
    cout<<temp<<endl;
}