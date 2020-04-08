#include<bits/stdc++.h>
using namespace std;

long power(int a,int b,int * dp){
    if(b<=0){
        return 1;
    }
    if(b==1){
        return a;
    }
    if(dp[b]!=-1){
        return dp[b];
    }
   // cout<<b<<" "<<dp[b]<<endl;
    dp[b]= power(a,b/2,dp)*power(a,(b-b/2),dp);
  //  return power(a,b/2,dp)*power(a,(b-b/2),dp);
  return dp[b];

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int dp[b+1];

        for(int i=0;i<b+1;i++){
            dp[i]=-1;
        }
        dp[1]=a;
        //cin>>a>>b;
        cout<<power(a,b,dp);
    }
}