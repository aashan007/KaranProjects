#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int s;
        int res=0;
        int a,b;
        cout<<"Enter 2 numbers";
        cin>>a>>b;
        cout<<"Enter from follwing\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division";
        cin>>s;
        
        switch(s){
            case 1: s=a+b;
                break;
            case 2: s=a-b;
                break;
            case 3: s=a*b;
                break;
            case 4: if(b==0){
                cout<<"Please enter a value other than 0";
            }
            else{
                s=a/b;
            }
                break;
            default:
                cout<<"Please Enter from above valid number.";
        }

        cout<<"Result : "<<s<<endl;


        

    }
}