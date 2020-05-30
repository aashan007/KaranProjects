#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    bool flag=true;
    cin>>s;
    for(int i=0;i<(s.size()/2);i++){
        if(s[i]!=s[s.size()-1-i]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"String is Palindrome";

    }
    else{
        cout<<"String is Not Palindrom";
    }
}