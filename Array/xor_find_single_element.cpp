// Find the single element where array contain double elements.
#include<iostream>
using namespace std;
int main(){
	int a[] = {1,1,2,3,3};
	int x = a[0],n=sizeof(a)/sizeof(a[0]);
	for(int i=1;i<n;i++){
		x = x^a[i];
	}
	cout<<x;
	return 0;
}
