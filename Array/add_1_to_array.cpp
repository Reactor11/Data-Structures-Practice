// Add 1 to the digits of array.
#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"N : ";
	cin>>n;
	int arr[n+1];
	arr[0] = 0;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	int i;
	for(i=n;i>=0;i--){
		if(arr[i]!=9) break;
		else arr[i] = 0;
	}
	arr[i]++;
	
	for(int i=0;i<=n;i++){
		if(i==0 && arr[i] == 0) continue;
		cout<<arr[i]<<" ";
	}

}
