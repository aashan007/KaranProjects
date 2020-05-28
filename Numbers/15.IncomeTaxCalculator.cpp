#include<bits/stdc++.h>
using namespace std;

int main(){
    float amount=0;
    float totalCutting = 0;
    cout<<"Enter the Annual Earning:\n";
    cin>>amount;
    float savingCut=0;
    cout<<"Do you any Tax Saving Documents (e.g. 80c/D)\n If yes enter the amount here. It should Not exceed 1,50,000\n";
    cin>>savingCut;
    if(savingCut>150000){
        savingCut = 150000;
    }
    amount = amount - savingCut;
    if(amount<=500000){
        totalCutting = 0;
    }
    else{
        // Tax cutting for 2.5 to 5.0 Lakh
        totalCutting = 250000*.05;

        if(amount>1000000){
            totalCutting = totalCutting + 500000 * .2 + (amount-1000000)*.3;
        }
        else{
            totalCutting = totalCutting + (amount-500000)*.2;
        }
    }

    cout<<"Total Annual Amount : "<<amount<<endl;
    cout<<"Total Amount in Hand : "<<amount-totalCutting<<endl;
    cout<<"Total Amount as Tax : "<<totalCutting<<endl;


}