// Move all the zero to the left.
// 1 0 0 0 0 0 1
// 1 1 0 0 0 0 0 

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"N: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	
	int count=0;
	int z=0,nz=0;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
		count++;	
		nz++;
		}
		else {
			nz++;
			z++;
		}
		if(nz!=z){
			arr[z] = arr[nz];
		}
	}
	int i=n-1;
	while(count--){
		arr[i] = 0;
		i--;
	}
	
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	
	return 0;
}
