
/* https://leetcode.com/problems/goal-parser-interpretation/description/

*/
#include<bits/stdc++.h>
using namespace std;

string Goalparser(string& command){
    string temp;
    for(int i=0;i<command.size();i++){
        if(command[i] == 'G'){
            temp += 'G';
        }else if(command[i] == '(' && command[i+1] == ')'){
            temp += 'o';
            i++; 

        }else if(command[i] == '(' && command[i+1] == 'a' && command[i+2] == 'l' && command[i+3]== ')'){
            temp += "al";
            i += 3;
        }
    }
    return temp;
}

int main(){
    string command;
    cin>>command;
    cout<<Goalparser(command);
}