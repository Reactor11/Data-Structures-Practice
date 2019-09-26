// Place the elements of array according to their index. if not present place -1.

#include<bits/stdc++.h>
using namespace std;

bool lfind(int a[],int val,int n){
	for(int i=0;i<n;i++){
		if(a[i]==val) return true;
	}
	return false;
}

int main(){
	int n,k;
	cout<<"N : ";
	cin>>n;
	int arr[n],a[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		a[i] = arr[i];
	}

// Approach 1: 
	int t[n] = {0},temp[n];
	
	for(int i=0;i<n;i++){
		t[arr[i]] = 1;
	}
	
	for(int i=0;i<n;i++){
		if(t[i] == 1) arr[i] = i;
		else arr[i] = -1;
	}
	
// Approach 2:

	for(int i=0;i<n;i++){
		if(lfind(a,i,n)) temp[i] = i;
		else temp[i] = -1;
	}

	for(int i=0;i<n;i++){ 
		cout<<"arr : "<<arr[i]<<" ";
//		cout<<"temp : "<<temp[i]<<" ";
	}
}
