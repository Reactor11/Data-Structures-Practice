// Monotonic Array : When element present in either increasing or decreasing order.
// e.g. : 1,2,3,4 || 4,3,2,1 || 1,2,2,3,3,4 || 1,2,3,3,2 <-(X)

#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,1,4,5,6};
	bool flag1=true,flag2=true;
	for(int i=1;i<6;i++){
		if(!(arr[i-1]>arr[i])) flag1=false;
	}
	for(int i=1;i<6;i++){
		if(!(arr[i-1]<arr[i])) flag2=false;
	}
	if(flag1 || flag2) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
