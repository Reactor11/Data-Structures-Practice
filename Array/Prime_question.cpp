// Given two integers ‘L’ and ‘R’, write a program that finds the count
// of numbers having prime number of set bits in their binary representation in the range [L, R].
#include <iostream>
using namespace std;

int main() {
    bool arr[21]={0};
	arr[0] = 1;
	arr[1] = 1;
	for(int i=2;i*i<=21;i++){
		for(int j=i;i*j<=21;j++){
			arr[i*j] = 1;
		}
	}
	int t;
	cin>>t;
	while(t--){
	    long int l,r;
	    long int count=0;
	    cin>>l>>r;
	    //	int x = __builtin_popcount(4); count the number of set bits.
	    for(long int i=l;i<=r;i++){
	        long int temp=i,c=0;
	        while(temp!=0){
	            if(temp % 2 == 1) c++;
	            temp/=2;
	        }
	        if(arr[c] == 0) count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
