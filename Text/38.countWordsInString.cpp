#include<bits/stdc++.h>
using namespace std;

int main(){
    fstream myfile;
    unordered_map<string,int> mp;
    string line;
    myfile.open("text.txt");
    if(myfile.is_open()){
        while(getline (myfile,line)){
            string s;

            for(auto ch : line){
                if(ch==' ' || ch==',' || ch=='.'){
                    mp[s]++;
                    s.erase();
                }
                else{
                    s = s + ch;
                }
            }
        }
        myfile.close();
    }
    else{
        cout<<"Unable to Open the file\n";
    }
    if(mp.size()==0){
        cout<<"File is empty\n";
    }
    else{
        for(auto it=mp.begin();it!=mp.end();++it){
            cout<<it->first<<" : "<<it->second<<endl;
        }
    }

    return 0;
    
}