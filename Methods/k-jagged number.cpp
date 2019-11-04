#include<bits/stdc++.h>
using namespace std;
// k-jagged number is a number if smallest prime factor >= k.
// first ten 7-jagged number.
// A k-rough or k-jagged number is a number whose smallest prime factor
// is greater than or equal to the number ‘k’.
// Returns true if n is k rough else false
bool isJagged(int n, int k)
{
    // If n is even, then smallest prime
    // factor becomes 2.
    if (n % 2 == 0)
        return (k <= 2);

    // n must be odd at this point.  So we
    // can skip one element (Note i = i +2)
    for (int i = 3; i*i <= n; i = i+2)
        if (n%i == 0)
            return (i >= k);

   return (n >= k);
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
