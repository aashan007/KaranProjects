#include<bits/stdc++.h>
using namespace std;

void bubblesort(int * a,int n)
{
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(a[j-1]>a[j]){
                int temp = a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }

}
void simple_merge(int * a,int start,int mid,int end){
    int l1 = mid-start+1;
    int l2 = end-mid;
    int L[l1];
    int R[l2];
    for(int i=0;i<l1;i++){
        L[i]=a[start+i];
    }
    for(int j=0;j<l2;j++){
        R[j]=a[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=start;
    while(i<l1 && j<l2 ){
        if(L[i]<R[j])
           {
               a[k]=L[i];
               i++;
           } 
        else{
            a[k]=R[j];
            j++;
        }
        k++;
            
        }
    while(i<l1){
        a[k]=L[i];
        k++;
        i++;
    }
    while(j<l2){
        a[k]=R[j];
        k++;
        j++;
    }
    
}

    //return res;



void mergesort(int * a,int start,int end){
    if(start<end){
        
        int mid = (start+end)/2;
       // cout<<start<<" "<<mid<<" "<<end<<endl;
        mergesort(a,start,mid);
        mergesort(a,mid+1,end);
        simple_merge(a,start,mid,end);
        // for(int i=start;i<=end;i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
    }
    return;


}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int l;
        cin>>l;
        switch(l){
            case 1:
                bubblesort(a,n);
                for(int i=0;i<n;i++){
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                break;
            case 2:
                // cout<<n<<" "<<endl;
                // for(int i=0;i<n;i++){
                //     cout<<a[i]<<" ";
                // }
                mergesort(a,0,n-1);
                for(int i=0;i<n;i++){
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                break;
            default:
                cout<<"Enter from 1 and 2"<<endl;
        }
    }
}