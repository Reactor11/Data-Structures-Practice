// Find minimum distance between two elements

#include<iostream>
using namespace std;

int main(){
	int arr[] = {2,3,4,5,3,4,5},n1=3,n2=4;
	int n = sizeof(arr)/sizeof(arr[0]),min=INT_MAX;
	int index1=-1,index2=-1;
	for(int i=0;i<n;i++){
		if(arr[i]==n1) index1=i;
		else if (arr[i]==n2) index2=i;
		if(min>abs(index1-index2)) min = abs(index1-index2);
	}
	cout<<min<<endl;
	return 0;
}
