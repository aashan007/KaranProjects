#include<bits/stdc++.h>
using namespace std;

int main(){
    int countHead = 0;
    int countTale = 0;
    int n;
    cin>>n;
    while(n--){
        
        int n = rand()%2;
        if(n){
            countHead++;
        }
        else{
            countTale++;
        }
    }

    cout<<"Total number of Head : "<<countHead<<endl;
    cout<<"Total number of Tale : "<<countTale<<endl;

}