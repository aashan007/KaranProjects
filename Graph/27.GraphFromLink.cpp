#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> list;
    int n;
    cin>>n;
    int maxLen =-1;
    while(n--){
        vector<int> temp;
        int len;
        cin>>len;
        maxLen=max(len,maxLen);
        while(len--){
            int val;
            cin>>val;
            temp.push_back(val);
        }
        list.push_back(temp);
    }

    for(int i=0;i<list.size();i++){
        for(int j=0;j<list[i].size();j++){
            cout<<list[i][j]<<" ";
        }
        cout<<endl;
    }
   
    vector<vector<int>> graph(maxLen,vector<int>(maxLen,0));
    for(int i=0;i<list.size();i++){
        for(int j=0;j<list[i].size()-1;j++){
            graph[list[i][j]-1][list[i][j+1]-1]=1;
        }
    }

    for(int i=0;i<maxLen;i++)
    {
        cout<<i+1<<" : ";
        for(int j=0;j<maxLen;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}

/*
3
3
1 2 3
4
2 4 1 3
2
2 1

*/