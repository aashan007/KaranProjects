#include<bits/stdc++.h>
using namespace std;

float toCel(float val){
    return ((val-32.0)*5)/9;
}
float toFah(float val){
    return ((val*9)/5)+32.0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter the conversion you want\n1.Temperature\n2.Currency\n3.Volume\n4.Mass\n";
        cin>>n;

        switch(n){
            case 1:
                int k;
                cout<<"\n1.Fahrenheit to Celsius\n2.Celsius to Fahrenheit\n";
                cin>>k;
                float val;
                cout<<"\nEnter the value to Convert\n";
                cin>>val;
                if(k==1){
                    cout<<toCel(val);
                }
                else{
                    cout<<toFah(val);

                }
                break;
            case 2:
                float k1;
                cout<<"\nEnter the converion rate for 1 unit\n";
                cin>>k1;
                int j;
                cout<<"\nEnter the amount you want to convert\n";
                cin>>j;
                cout<<(j*k1);
                break;
            case 3:
                float mass;
                float density;
                cout<<"\nEnter the mass and density\n";
                cin>>mass>>density;
                cout<<(mass/density);
                break;
            case 4:
                float volume1;
                float density1;
                cout<<"\nEnter volume and density\n";
                cin>>volume1>>density1;
                cout<<(volume1*density1);
                break;
            default:
                cout<<"\nPlease enter from the following options\n";
        }
    }
}