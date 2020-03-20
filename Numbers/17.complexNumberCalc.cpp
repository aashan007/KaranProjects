#include<bits/stdc++.h>
using namespace std;

void addition(int a,int ia,int b,int ib){
    int real=a+b;
    int img=ia+ib;
    if(img>0){
        cout<<real<<" + i"<<(img)<<endl;
    }
    else{
        cout<<real<<" - i"<< (-1 * img)<<endl;
    }
    
}
void sub(int a,int ia,int b,int ib){
    int real=a-b;
    int img=ia-ib;
    if(img>0){
        cout<<real<<" + i"<<(img)<<endl;
    }
    else{
        cout<<real<<" - i"<< (-1 * img)<<endl;
    }
}

void multi(int a,int ia,int b,int ib){
    int real = a*b + ((-1) * (ia * ib));
    int img = a*ib + ia*b;
    if(img>0){
        cout<<real<<" + i"<<(img)<<endl;
    }
    else{
        cout<<real<<" - i"<< (-1 * img)<<endl;
    }

}

void div(int a,int ia,int b,int ib){
    float real = (float)((a*b) + (-1* ia * ib))/ ((b*b)+(ib*ib));
    int img = (float)((-1 * a*ib) + b*ia)/((b*b)+(ib*ib));
     if(img>0){
        cout<<real<<" + i"<<(img)<<endl;
    }
    else{
        cout<<real<<" - i"<< (-1 * img)<<endl;
    }


}




int main(){
    int i=1;
    while(i){
        int a,ia,b,ib;
        cout<<"Enter two complex number"<<endl;
        cin>>a>>ia>>b>>ib;
        int a1;
        cout<<" ENTER 1 TO add \n Enter 2 to Subtract \n Enter 3 to Multiply \n Enter 4 to Divide\n";
        cin>>a1;
        switch(a1){
            case 1:
                addition(a,ia,b,ib);
                break;
            case 2:
                sub(a,ia,b,ib);
                break;
            case 3:
                multi(a,ia,b,ib);
                break;

            case 4:
                div(a,ia,b,ib);
                break;
            default:
                cout<<"Please Enter from the above Number"<<endl;
        }


        cout<<"Enter 0 to exit";
        cin>>i;
    }
}