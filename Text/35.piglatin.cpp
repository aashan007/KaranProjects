#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    unordered_map<char,int> mp;
    getline(cin,s);
    int count =0;

    for(auto ch:s){
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u'){
            s=s.substr(1)+ch+"ay";
        }
        else{
            s=s+"yay";
        }
        break;
    }
 cout<<s<<endl; 
}