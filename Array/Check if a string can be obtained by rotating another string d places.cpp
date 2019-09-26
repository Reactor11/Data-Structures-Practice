#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define fi(x,n) for(ll i=x;i<n;i++)
#define fj(x,n) for(ll j=x;j<n;j++)
#define fdi(x,n) for(ll i=x-1;i>=n;i--)
#define fdj(x,n) for(ll j=x-1;j>=n;j--)
using namespace std;

void ReverseArray(string& s1,int start, int end){
	while(start < end){
		char temp;
		temp = s1[start];
		s1[start] = s1[end];
		s1[end] = temp;
		start++;
		end--;
	}
}

bool func(string& s1,string& s2,int d){
	if(s1.length() != s2.length())
		return false;
	
	string s_l,s_r;
	int n = s1.length();
	
	for(int i=0;i<n;i++){
		s_l.push_back(s1[i]);
		s_r.push_back(s1[i]);
	}
	
	ReverseArray(s_l,0,d-1);
	ReverseArray(s_l,d,n-1);
	ReverseArray(s_l,0,n-1);
	
	ReverseArray(s_r,0,n-d-1);
	ReverseArray(s_r,n-d,n-1);
	ReverseArray(s_r,0,n-1);
	
//	cout<<"left : "<<s_l<<endl;
//	cout<<"right : "<<s_r;
	bool left=true,right=true;

	for(int i=0;i<s1.length();i++){
		if(s2[i]!=s_l[i])
			left = false;
		if(s2[i]!=s_r[i])
			right = false;
	}
	if(right || left){
		return true;
	}
	return false;
}


int main(){
    fast;
    
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int d;
    cin>>d;
    if(func(s1,s2,d) == true)
    	cout<<"YES";
	else
		cout<<"NO";
    
    return 0;
}
