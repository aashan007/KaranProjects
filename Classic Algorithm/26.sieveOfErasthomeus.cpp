#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> sieve(1000000,1);
    sieve[0]=0;
    sieve[1]=0;
    for(int i=2;i<1000000;i++){
        if(sieve[i]){
            for(int j=2*i;j<1000000;j=j+i){
                sieve[j]=0;
            }
        }
    }

    for(int i=0;i<100;i++){
        if(sieve[i]){
            cout<<i<<" ";
        }
    }
}