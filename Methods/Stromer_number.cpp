#include<bits/stdc++.h>
using namespace std;
// N -> N*N + 1 should be (max. prime factor of n*n+1) >= 2*N

// Approach 1:
bool isPrime(long long int n){
    if (n<2) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}
bool StromerNumber(long long int n){
    long long int t,x;
    x = n;
    t=(n*n)+1;
    n = t;
    while(n){
        if(t%n==0 && isPrime(n)) break;
        n--;
    }
    return (n>=2*x);
}


// Approach 2 :

int maxPrimeFactors(int n)
{
    int maxPrime = -1;
    while(n % 2 == 0)
    {
        maxPrime = 2;
        n /= 2;
    }
    for(int i = 3; i < (int)(n * 1 /
                2 + 1); i += 2)
        while(n % i == 0)
        {
            maxPrime = i;
            n /= i;
        }
    if (n > 2)
        maxPrime = n;
    return (int)(maxPrime);
}
 int stormer(int n)
{
    int i = 1;
    int count = 0;
    while(count < n)
    {
        int t = i * i + 1;
        if (maxPrimeFactors(t) >= 2 * i)
        {
            cout << i ;
            cout <<" ";
            count += 1;
        }
        i += 1;
    }
    return i;
}

int main(){
    long long int n;
    cin>>n;
    // if(StromerNumber(n)) cout<<"Yes";
    // else cout<<"NO"<<endl;
    stormer(n);
}
