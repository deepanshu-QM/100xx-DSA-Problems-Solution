
/*
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/

Problem
You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.

Constraints 

Note
String S consists of lowercase English Alphabets only.

Sample Input
aba
Sample Output
YES
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,temp;
    getline(cin,s);
    for(int i=s.size()-1;i>=0;i--){
        temp.push_back(s[i]);
    }

    if(s == temp){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

/* this is Efficent Method = 0(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    
    int i=0, j=s.size()-1;
    while(i<j){
        if(s[i] != s[j]){
            cout<<"NO";
            return 0;
        }
    }
    i++;
    j--;
    cout<<"YES";
    return 0;
}


*/