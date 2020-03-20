#include<bits/stdc++.h>
using namespace std;

long  long factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
     return n * factorial(n-1);
}


int main(){
    int j=1;
    while(j){
        int n;
        cin>>n;

        cout<<" Loop : "<<factorial(n)<<endl;

        long long result=1;
        
        int i=2;
        if(n==0 || n==1){
            cout<<1;
        }
        else {
             while(i<=n){
                 result = i * result;
                 i++;


        }
        cout<<"Iterative : "<<result<<endl;
        }
       


        cout<<"Enter 1 to continue and 0 to exit.";
        cin>>j;

    }
}
