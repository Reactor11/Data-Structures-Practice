#include<iostream>
using namespace std;

int main(){
    int n,c_zero=0,c_neg=0,max_neg=INT_MIN;
    long int p=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0) c_zero++;
        else{
            if(arr[i]<0) max_neg=max(max_neg,arr[i]);
            c_neg++;
            p*=arr[i];
        }
    }
    if(n==1) cout<<arr[0]<<endl;
    else{
        if(c_zero == n-1 && p < 0 || c_zero==n) cout<<"0"<<endl;
        else{
            if(p<0) cout<<p/max_neg<<endl;
            else cout<<p<<endl;
            }
    }
}
