#include<bits/stdc++.h>
using namespace std;

int main(){
    double result=0;
    int i=1;
    while(i){
    float w,h; //width and height of floorplan
    cout<<"Enter the width and height of Floorplan"<<endl;
    cin>>w>>h;
    float wTile,hTile;
    cout<<"Enter the width and height of tile with it's cost"<<endl;
    cin>>wTile>>hTile;
    float costTile=0;
    cin>>costTile;
    result = ((w*h)/(wTile * hTile))*costTile;
    
    cout<<"Total Cost:"<<result<<endl;
    cout<<"Enter 1 continue and 0 to exit"<<endl;
    cin>>i;

    }

}