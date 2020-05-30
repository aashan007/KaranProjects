
/*
Collatz Conjecture - Start with a number n > 1. Find the number of steps it takes to reach one using the following process:
 If n is even, divide it by 2. If n is odd, multiply it by 3 and add 1.
 */
#include<bits/stdc++.h>
using namespace std;
int collatz(int n){
    int count=0;
    if(n<=1){
        return 0;
    }
    if(n%2==0){
        return 1+collatz(n/2);
    }
    else{
        return 1+collatz((n*3)+1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<collatz(n);
    }
}