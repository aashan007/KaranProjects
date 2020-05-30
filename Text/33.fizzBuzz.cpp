#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<101;i++){
        if(i%3==0){
            if(i%5==0){
                cout<<"fizzbuzz"<<" ";
            }
            else{
                cout<<"fizz"<<" ";
            }
        }
        else if(i%5==0){
            cout<<"buzz"<<" ";
        }
        else{
            cout<<i<<" ";
        }
    }
}