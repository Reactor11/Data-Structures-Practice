#include<bits/stdc++.h>
using namespace std;
// N -> N*N + 1 should be (max. prime factor of n*n+1) >= 2*N
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
int main(){
    long long int n;
    cin>>n;
    if(StromerNumber(n)) cout<<"Yes";
    else cout<<"NO"<<endl;
}
