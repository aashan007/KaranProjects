#include<bits/stdc++.h>
using namespace std;


float compound(int p,int n,int r,int t){

    float result = p * pow((1 + r/n),n*t);

    return result;

}

int main(){

    int i=1;
    while(i){
    float p,n,r;
    double perMonth=0;
    cout<<"Enter Principal,Number of Year, Interest Rate"<<endl;
    cin>>p>>n>>r;
    perMonth = ((p+ (p*r/100)*n)/(12*n));
    cout<<perMonth<<endl;
    int j;
    cout<<"For compounding Monthly type : 1\n Weekly type : 2\n Daily type : 3 \n Continually type : 4"<<endl;
    cin>>j;
    switch(j){
        case 1:
            perMonth = compound(p,n,r,12);
            cout<<perMonth<<endl;
            break;
        case 2:
            perMonth = compound(p,n,r,52);
            cout<<perMonth<<endl;
            break;
        case 3:
            perMonth = compound(p,n,r,365);
            cout<<perMonth<<endl;
            break;
        case 4:
            //perMonth = compound(p,n,r,12);
            cout<<"DOnt know what they meant by continually"<<endl;
            break;
        default:
            cout<<"Wrong Entry"<<endl;
    } 

    
    cout<<"Enter 1 to continue"<<endl;   



    }

}