#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=1;
    while(i){
        int dec;
        cout<<"Enter 1 to convert Binary to decimal and 2 to convert decimal to binary"<<endl;
        cin>>dec;
        if(dec==1){
            string s;
            cin>>s;
            long long result=0;
            int si=s.size();
            while(si--){
                result = result + pow(2,si-1);

            }
            cout<<"Decimal Equivalent : "<<result<<endl;


        }
        else if(dec==2){
            long long val;
            cin>>val;
            string result;
            while(val){
                int i = val%2;
                result = to_string(i) + result  ;
                
                val=val/2;

            }
            cout<<"Binary Equivalent : "<<result<<endl;

        }
        else{
            cout<<"Enter 1 & 2 to process"<<endl;
        }

        cout<<"Enter 1 to continue, 0 to Exit"<<endl;
        cin>>i;
    }
}