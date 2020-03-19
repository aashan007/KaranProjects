#include<bits/stdc++.h>
using namespace std;

/*

Have the program find prime numbers until the user chooses to stop asking for the next one.

*/
int findPrime(int n){
    if(n<2){
        n=2;
    }
    while(n){
        int flag=true;
        if(n==2){
            return 2;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                flag=false;
            }

        }
        if(flag==1){
            return n;
        }
        else{
            n++;
        }
    }

   // return res;
}

int main(){
    bool n=true;
    int val=1;
    while(n){
        int primeNum=findPrime(val);
        cout<<primeNum<<endl;
        val=primeNum+1;
        cout<<"Next prime type 1"<<endl;
        cin>>n;
    }
}