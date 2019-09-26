#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	bool arr[n+1]={0};
	int x = __builtin_popcount(4); // count the number of set bits.
//	cout<<arr[20];
	arr[0] = 1;
	arr[1] = 1;
	for(int i=2;i*i<=n;i++){
		for(int j=i;i*j<=n;j++){
			arr[i*j] = 1;
		}
	}
	for(int i=2;i<=n;i++){
		if(arr[i] == 0) cout<<i<<" ";
//		cout<<arr[i];
	}
}
