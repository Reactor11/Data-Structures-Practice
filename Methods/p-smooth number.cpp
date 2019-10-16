#include<bits/stdc++.h>
using namespace std;

// P - smooth number is a number if largest prime factor <= p.
// first ten 10-smooth number.
bool isPrime(long long int n){
    if (n<2) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}

bool isSmooth(int x,int p){
	int temp=x;
	while(temp){
		if(x%temp==0 && isPrime(temp)){
			if(temp >= p) return true;
		}
		temp--;
	}
//	if(temp <= p) return true;
	return false;
}


int main(){
	int count=0,i=0;
	while(count!=10){
		if(isSmooth(i,10)){
			cout<<i<<" ";
			count++;
		}
		i++;
	}
}
