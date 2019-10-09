#include<iostream>
using namespace std;

long long int gcd(long long int a,long long int b){
    if(a==0) return b;
    return gcd(b%a,a);
}

int main(){
    cout<<gcd(16,24);
}
