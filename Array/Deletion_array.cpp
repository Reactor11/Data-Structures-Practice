#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter size : "<<endl;
	cin>>size;
	int arr[size+1];
	for(int i=0;i<size;i++) cin>>arr[i];
	
	int pos;
	cout<<"Enter pos (1-index based) : "<<endl;
	cin>>pos;
	
	for(int i=pos-1;i<size-1;i++) arr[i] = arr[i+1];
	
	cout<<"FINAL ARRAY : "<<endl;
	
	size--;
	
	for(int i=0;i<size;i++) cout<<arr[i]<<" ";
	
	return 0;
}
