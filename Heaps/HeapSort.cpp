#include<bits/stdc++.h>
using namespace std;

// Complexity : 1. Time : O(NLog(N))
//              2. Space : O(1)
void siftDown(int a[],int n,int k){
    while(2*k<=n){ // Checking if child is there or not
        int j=2*k;
        if(j<n && a[j]<a[j+1]) j++; // Checking whether left or right child have greator values
        if(a[k]>a[j]) break; // If parent is bigger then child.
        swap(a[j],a[k]);
        k=j;
    }
}
int main(){
        int a[6] = {0,5,3,4,2,1};
        int n=5;
        for(int i=n/2;i>=1;i--){
            siftDown(a,n,i);
        }
        while(n>1){
            swap(a[1],a[n--]);
            siftDown(a,n,1);
        }
    for(int i=1;i<=5;i++){
        cout<<a[i]<<" ";
    }
}
