#include<bits/stdc++.h>
using namespace std;

// P - smooth number is a number if largest prime factor <= p.
// first ten 10-smooth number.
bool isSmooth(int n, int p)
{
    int maximum = -1;
    while (!(n % 2))
    {
        maximum = max(maximum, 2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            maximum = max(maximum,i);
            n = n / i;
        }
    }
    if (n > 2)
        maximum = max(maximum, n);
    return (maximum <= p);
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
