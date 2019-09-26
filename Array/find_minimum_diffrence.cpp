// Find minimum diffrence between the elements.
// Approach 1 : T-> O(N^2)   S-> O(1) use two loops to calculate.
// Approach 2 : T-> O(NlogN) S-> O(1) Sort and compare arr[i] and arr[i+1]
// Approach 3 : T-> O(Largest element in the array) S-> O(Largest element in the array)
#include<bits/stdc++.h>
using namespace std;

int main(){
// Approach 1:
	int a[] = {1,10,100,18,3,5};
	int n = sizeof(a)/sizeof(a[0]);
	int mi = INT_MAX;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int x = abs(a[j] - a[i]);
			if(mi>x) mi = x;
		}
	}
	cout<<mi<<endl;
	
// Approach 2:
	int b[] = {9,-2,6,12,95};
	int nn = sizeof(b)/sizeof(b[0]);
	sort(b,b+nn);
	int m=INT_MAX;
	for(int i=1;i<nn;i++){
		int x= abs(b[i] - b[i-1]);
		if(m>x) m = x;
	}
	cout<<m<<endl;

// Approach 3:

	int c[] = {1,10,100,1000};
	int na = sizeof(c)/sizeof(c[0]);
	int t[10002] = {0} , min = INT_MAX;
	for(int i=0;i<na;i++){
		if(t[c[i]]){
			cout<<"0";
			exit(0);
		}
		else
			t[c[i]] = 1;
	}
	for(int i=0;i<1001;i++){
		if(t[i]){
		int index=i+1;
		while(t[index] == 0 && index<1001) index++;
		if(t[index] && abs(index-i)<min) min = abs(index-i);
		}
	}
	cout<<min;
	return 0;
}
