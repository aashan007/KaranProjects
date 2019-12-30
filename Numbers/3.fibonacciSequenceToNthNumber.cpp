#include<bits/stdc++.h>
using namespace std;

void printFibonacci(int *a,int n){
    if(n==1){
        a[0]=1;
    }
    else if(n==2){
        //cout<<"1 1"<<endl;
        a[0]=1;
        a[1]=1;
    }
    else{
        a[0]=1;
        a[1]=1;
        for(int i=2;i<n;i++){
            a[i]=a[i-1]+a[i-2];
        }


    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int n;
    int t;
    cin>>t;
    while(t--){
        int *a;
        int n;
        cin>>n;
        a=new int[n];
      
        printFibonacci(a,n);
        delete a;

    }
}