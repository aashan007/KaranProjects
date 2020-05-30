#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> lists;
    while(n--){
        int a,b;
        cin>>a>>b;
        pair<int,int> p(a,b);
        lists.push_back(p);
    }
    float distance =3.402823466E+38;
    for(int i=0;i<lists.size()-1;i++){
        int x1 = lists[i].first;
        int y1 = lists[i].second;
        for(int j=i+1;j<lists.size();j++){
            int x2=lists[j].first;
            int y2=lists[j].second;
            float tempDistance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
            distance = min(distance,tempDistance);
        }
    }
    cout<<"Shortest Distance : "<<distance; 
}