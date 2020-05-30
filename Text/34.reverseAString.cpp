#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    bool flag=true;
    cin>>s;
    for(int i=0;i<(s.size()/2);i++){
        char ch = s[i];
        s[i]= s[s.size()-1-i];
        s[s.size()-1-i] = ch;
       
    }

    cout<<s<<endl;
    
}