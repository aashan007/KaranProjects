#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> lists;
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
        lists.push_back(temp);
    }

    for(int i=0;i<lists.size();i++){
        for(int j=0;j<lists[i].size();j++){
            cout<<lists[i][j]<<" ";
        }
        cout<<endl;
    }
   
    vector<vector<int>> graph(maxLen,vector<int>(maxLen,0));
    for(int i=0;i<lists.size();i++){
        for(int j=0;j<lists[i].size()-1;j++){
            graph[lists[i][j]-1][lists[i][j+1]-1]=1;
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