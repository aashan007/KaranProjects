#include<bits/stdc++.h>
using namespace std;

int sumSquare(int n){
    int result=0;
    while(n){
        int temp = n%10;
        result= result + temp*temp;
        n=n/10; 
    }

    return result;
}


bool isHappy(int n){
    unordered_set<int> s;
    while(n){
        int sum = sumSquare(n);
        if(sum==1){
            return 1;
        }
        if(s.count(sum)>0){
            return 0;
        }
        s.insert(sum);

        n=sum;
       
    }
    return 0;

}
int main(){
    int i=1;
    while(i){
        int n;
        cin>>n;

        if(isHappy(n)){
            cout<<"Happy Number :)"<<endl;
        }
        else{
            cout<<"Not Happy Dude! :/"<<endl;
        }


        cout<<"Enter 0 to exit";
        cin>>i;

    }
}