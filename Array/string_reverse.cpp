#include<bits/stdc++.h>
using namespace std;

// Approach 2
void reverse_recursive(int arr[],int n,int i){
	if(i == n/2) return;
	else{
		swap(arr[i],arr[n-i-1]);
		reverse_recursive(arr,n,++i);
	}
}

int main(){
	int arr[] = {1,2,3,4,5};
	int n=5;
//	Approach 1
	for(int i=0;i<n/2;i++){
//		int x = arr[i];
//		arr[i] = arr[n-i-1];
//		arr[n-i-1] = x;
		swap(arr[i],arr[n-i-1]);
	}
//	for(int i=0;i<5;i++) cout<<arr[i]<<" ";
	
	int a[] = {1,2,3,4,5};
	reverse_recursive(a,n,0);
	for(int i=0;i<5;i++) cout<<a[i]<<" ";
}
