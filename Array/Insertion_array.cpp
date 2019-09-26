#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter size : "<<endl;
	cin>>size;
	int arr[size+1];
	for(int i=0;i<size;i++) cin>>arr[i];
	
	int pos,val;
	cout<<"Enter pos : "<<endl;
	cin>>pos;
	cout<<"Enter value : "<<endl;
	cin>>val;
	
	for(int i=size;i>pos;i--){
		arr[i] = arr[i-1];
	}
	arr[pos] = val ;
	
	cout<<"FINAL ARRAY : "<<endl;
	
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
}
