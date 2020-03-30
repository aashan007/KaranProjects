#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1;

    unordered_map<int,string> mp;
  //  mp[0]='Zero';
    mp[1]="One";
    mp[2]="Two";
    mp[3]="Three";
    mp[4]="Four";
    mp[5]="Five";
    mp[6]="Six";
    mp[7]="Seven";
    mp[8]="Eight";
    mp[9]="Nine";
    mp[10]="Ten";
    mp[11]="Eleven";
    mp[12]="Twelve";
    mp[13]="Thirteen";
    mp[14]="Fourteen";
    mp[15]="Fifteen";
    mp[16]="Sixteen";
    mp[17]="Seventeen";
    mp[18]="Eighteen";
    mp[19]="Ninteen";
    mp[20]="Twenty";
    mp[30]="Thirty";
    mp[40]="Forty";
    mp[50]="Fifty";
    mp[60]="Sixty";
    mp[70]="Seventy";
    mp[80]="Eighty";
    mp[90]="Ninty";
    mp[100]="Hundred";
    mp[1000]="Thousand";
    while(i){
        long long n;
        cin>>n;
        string result="";
        int count=1;
        while(n){
            
            int temp = n%10;
            if(mp.count(temp)>0){
                result =" " + mp[temp] + result;
            }
            n=n/10;
            
            count++;

        }


        cout<<"Enter 0 to EXIT\n";
        cin>>i;
    }
    
}