#include<bits/stdc++.h>
using namespace std;
//luhn algorithm
int main(){
    int * d;
    int t;
    cin>>t;
    while(t--){
       // cout<<"Enter the length of card number."<<endl;
        int *d;
        string s;
        cout<<"Enter the card number!"<<endl;
        
        cin>>s;
        //cout<<s.size();
        d=new int[s.size()];
      
       // cin>>s;
        for(int i=0;i<s.size();i++){
            d[i]=s[i]-'0';
           // cout<<d[i]<<" "<<s[i]<<endl;
        }
        //cout<<*d;
        //luhn algorithm
        for(int j=s.size()-2;j>=0;j=j-2){
            d[j] = d[j]*2;
            if(d[j]>=10){
                d[j]=d[j]/10 + d[j]%10;

            }
        }

        int sum=0;
        for(int i=0;i<s.size();i++){
            sum=sum+d[i];
        }
        if(sum%10==0){
            cout<<"Valid Credit Card Number!";
        }
        else{
            cout<<"Not a valid Credit Card Number!";
        }



    }

    

}