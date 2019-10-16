#include<bits/stdc++.h>
using namespace std;

// k-jagged number is a number if smallest prime factor >= k.
// first ten 7-jagged number.
bool isPrime(long long int n){
    if (n<2) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}

bool isJagged(int x,int k){
	int temp=2;
	while(temp!=x){
		if(x%temp==0 && isPrime(temp)){
			if(temp >= k) return true;
		}
		temp++;
	}
//	if(temp <= p) return true;
	return false;
}


int main(){
	int count=0,i=2;
	while(count!=10){
		if(isJagged(i,7)){
			if(count>=5)
			cout<<i<<" ";
			count++;
		}
		i++;
	}
}
