
/*  https://www.geeksforgeeks.org/problems/remove-character3815/1

*/

#include<bits/stdc++.h>
using namespace std;

string charRemover(const string& str1, string& str2){
    unordered_set<char>  str2set(str2.begin(), str2.end());
    string temp;
    for(char chr : str1){
        if(str2set.find(chr) ==  str2set.end()){
            temp += chr;
        }
    }
    return temp;
}
int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);

    charRemover(str1, str2);
    return 0;



}