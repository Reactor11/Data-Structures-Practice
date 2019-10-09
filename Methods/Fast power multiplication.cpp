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

ll ans;

void power_(ll base,ll power){
    if(b<0) return;
    if(b%2==1){
        ans = ans*base;
    }
    base = ((base % 1000000007) * (base % 1000000007)) % 1000000007;
    power = power/2;
    power_(base,power);
}

int main(){
    fast_veet;
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif

    power_(2,10);
    cout<<ans;
    return 0;
}
