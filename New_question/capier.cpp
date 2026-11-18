#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,text, newtext="";
    getline(cin, s);
    getline(cin, text);
    int k;
    cin>>k;
    
    if(s == "encoder" || s == "ENCODER"){
        for(int i=0;i<text.size();i++){
            newtext += (char)((text[i] - 'A' + k) % 26 + 'A');
        }
    }else if (s == "decoder" || s == "DECODER"){
        for(int i=0;i<text.size();i++){
            newtext += (char)((text[i] - 'A'-k+26)%26 + 'A');
        }
    }
    cout<<newtext;

    
    
}