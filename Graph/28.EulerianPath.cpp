#include<bits/stdc++.h>
using namespace std;

int main(){
    bool Eulerian_Path =true;
    bool Eulerian_Cycle =true;
    int n;
    cin>>n;
    int N=n;
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
    for(int i=0;i<n;i++){
        if(graph[i].size()%2!=0){
            
            Eulerian_Cycle =false;
            count++;
            cout<<i<<" "<<graph[i].size()<<" "<<count<<endl;
        }
    }
    if(count%2==1){
        Eulerian_Path=false;
    }



    if(Eulerian_Cycle){
        cout<<"Graph is Eulerian Cycle\n";
    }
    else if(Eulerian_Path){
        cout<<"Graph is Eulerian Path\n";
    }
    else{
        cout<<"It is not Eulerian\n";
    }
}