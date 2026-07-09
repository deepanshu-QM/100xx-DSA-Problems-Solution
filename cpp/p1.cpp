/*
Input Format
You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format
p1:In the first line print two space-separated integers, representing the length of a and b respectively.
p2:In the second line print the string produced by concatenating a and b(a+b)
p3:In the third line print two strings separated by a space, a" and b". a" and b" are the same as a and b , 
respectively, except that their  first characters are swapped.

Sample Input
abcd
ef

Sample Output
4 2
abcdef
ebcd af
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    // a swap = e  and e with a 
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    cout<<a<<" "<<b<<endl;
    
}