#include<bits/stdc++.h>
using namespace std;
#define fast_veet ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define fi(x,n) for(ll i=x;i<n;i++)
#define fj(x,n) for(ll j=x;j<n;j++)
#define fdi(x,n) for(ll i=x-1;i>=n;i--)
#define fdj(x,n) for(ll j=x-1;j>=n;j--)
#define debug(x) cout<<#x<<" "<<x<<endl
#define mem(x,val) memset((x),(val),sizeof(x))
#define pb push_back
#define rtcheck cout<<"Working Till Here."<<endl;exit(0);
#define inf 1e18
#define endl "\n"

ll prime_factors(ll num,int i=2){
	if(num == 1) return 1;
	else if(num == 2) return 2;
	else{
		if(num%i==0){
			cout<<i<<" ";
			prime_factors(num/i,i);
		}
		else 
			prime_factors(num,i+1);	
	}
}

int main(){
    fast_veet;
    prime_factors(200000000000000000);
    return 0;
}
