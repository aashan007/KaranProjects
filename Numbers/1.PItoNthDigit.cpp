#include<bits/stdc++.h>
using namespace std;

/*
Find PI to the Nth Digit - 
Enter a number and have the program generate PI up to that many decimal places. Keep a limit to how far the program will go.

*/

const int size=257; //This is max size it can show

void print(int * a,int n){ // This function will print PI value
    cout<<a[0]<<".";
    for(int i=1;i<=n;i++){
        cout<<a[i];
    }
}

void calc(int *a,int n){
    int count=0;
    while(a[count]!=-1){ //This array will check if array is filled early if yes then it would Iput its cursor into its last entered Index.

        count++;
    }
    
    count=count-1;
    if(count==0){ //Boundary case when It is in first index itself then we dont have to decrement the count value.
        count=1;
    }
    for(int i=count;i<=n;i++){
        int rem;
        if(i==1){ //for the first index we will find the remainder and store in the next index of the array list.
           // quo=22/7;
            rem=22%7;
            rem*=10;
            a[i]=rem/7;
            //rem*=10;
            a[i+1]=rem%7;

            
        }
        else{
            rem = a[i]*10; //here the current index show the remainder from that we calculate the decimal part of the Pi
            a[i]=rem/7;
            a[i+1]=(rem)%7;

        }
    }
}
int main(){
//    cout<<float(22/7);
    int a[257];
    a[0]=3;
    for(int i=1;i<256;i++){
        a[i]=-1;
    }
    int n;
    cin>>n;
    do{
        
        if(n>255){
            cout<<"Please enter a value less than 256"<<endl;
            break;
        }
        if(a[n]==-1){
            calc(a,n);
            print(a,n);
        }
        else{
            print(a,n);
        }
        cout<<"\nenter value : ";
        cin>>n;

    }while(n);


}