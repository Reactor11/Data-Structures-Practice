//Array is sorted and rotated. Find k. how many times it is rotated.

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cout<<"N : ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];	
	}
	for(int i=1;i<n;i++){
			if(arr[i]<arr[i-1]){
			k=i;	
		}
	}
	cout<<"No. of rotation is : "<<(n-k)%n;
		
}
