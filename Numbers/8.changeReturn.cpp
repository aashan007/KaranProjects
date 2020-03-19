#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=1;
    while(i){
        int n;
        cout<<"Enter the amount"<<endl;
        cin>>n;
        int countNickel=0,countDimes=0,countQuater=0,countPenny=0;
        while(n){
            countQuater = n/25;
            n = n%25;
            countDimes = n/10;
            n=n%10;
            countNickel = n/5;
            n = n%5;
            countPenny=n;
            n=0;
            
        }
        cout<<" Quater : "<<countQuater<<" Dimes : "<<countDimes<<" Nickel : "<<countNickel<<" Penny : "<<countPenny<<endl;


        cout<<"Enter 1 to continue, 0 to exit"<<endl;
        cin>>i;
    }
}