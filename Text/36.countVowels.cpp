#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    unordered_map<char,int> mp;
    getline(cin,s);
    int count =0;
    cout<<s<<endl;
    for(auto ch:s){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            mp[ch]++;
            count++;
        }
    }
    cout<<"Total Count of vowel : "<<count<<endl;
    cout<<"Individual Count : \n";
    for(auto it=mp.begin();it!=mp.end();++it){
        cout<<it->first<<" : "<<it->second<<endl;
    }
}