#include<bits/stdc++.h>

using namespace std;

/*

Have the user enter a number and find all Prime Factors (if there are any) and display them. 

*/


void printFactors(int n){

    for(int i=1;i*i<=n;i++){
        if(n%i==0)
        {
            if(i*i==n)
                cout<<i<<" ";
            else
            {
                cout<<i<<" "<<n/i<<" ";
            }
            
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        printFactors(n);
    }
}