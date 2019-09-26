#include<bits/stdc++.h>
using namespace std;

void ReverseArray(int arr[],int start, int end){
	while(start<end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void left_rotate(int arr[],int d,int n){
	ReverseArray(arr,0,d-1);
	ReverseArray(arr,d,n-1);
	ReverseArray(arr,0,n-1);
}

void right_rotate(int arr[],int d,int n){
	ReverseArray(arr,0,n-d-1);
	ReverseArray(arr,n-d,n-1);
	ReverseArray(arr,0,n-1);
}

void print_array(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr) / sizeof(arr[1]);
	int d = 3;
	d = d % n;
	print_array(arr,n);
	left_rotate(arr,d,n);
	print_array(arr,n);
	right_rotate(arr,d,n);
	print_array(arr,n);
}
