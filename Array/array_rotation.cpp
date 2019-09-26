#include<iostream> 
using namespace std;
//  Approach 2 :
void rotate_by_1(int arr[],int n){
	int x = arr[0];
	for(int i=0;i<n-1;i++){
		arr[i] = arr[i+1];
	}
	arr[n-1] = x;
	// Time-complexity - O(X*N)
	// Space-complexity - O(1)
}

int main(){
	int a[] = {1,2,3,4,5};
	int n = sizeof(a)/sizeof(a[0]),x=3;
	int t[3],index=0;
//  Approach 1 :
	for(int i=0;i<x;i++){
		t[i] = a[i];
	}
	for(int i=0;i<n-x;i++){
		a[i] = a[i+x];
	}
	for(int i=n-x;i<n;i++){
		a[i] = t[index++];
	}
	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
	}
	// Time-complexity - O(N)
	// Space-complexity - O(N),O(X) {Depends on programmer.}
	
	int b[] = {1,2,3,4,5};
	n = sizeof(a)/sizeof(a[0]);
	for(int i=0;i<3;i++){
		rotate_by_1(b,n);
		for(int i=0;i<n;i++) cout<<b[i]<<" ";
		cout<<endl;
	}
}
