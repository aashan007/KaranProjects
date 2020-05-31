#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &graph,vector<int> &visited,int sv){
    if(visited[sv]){
        return;
    }
    visited[sv]=1;
    for(int i=0;i<graph[sv].size();i++){
        if(!visited[graph[sv][i]]){
            dfs(graph,visited,graph[sv][i]);
        }
    }
    
}

int main(){
    bool Eulerian_Path =true;
    bool Eulerian_Cycle =true;
    int n;
    cin>>n;
    int N;
    cin>>N;
    vector<vector<int>> lists;
    while(N--){
        int a,b;
        cin>>a>>b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        lists.push_back(temp);
    }
    vector<vector<int>> graph(n);
    for(int i=0;i<lists.size();i++){
     //   cout<<lists[i][0]-1<<" "<<lists[i][1]-1<<endl;
         graph[lists[i][0]-1].push_back(lists[i][1]-1);
         graph[lists[i][1]-1].push_back(lists[i][0]-1);
    }
    int count=0;
    vector<int> visited(n);
    dfs(graph,visited,0);

    int flag=true;
    for(int i=0;i<n;i++){
        if(visited[i]==0){
            flag=false;
        }
    }

    if(flag){
        cout<<"Connected";
    }
    else{
        cout<<"Not Connected";
    }
   



 
}