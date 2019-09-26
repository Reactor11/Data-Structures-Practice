#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> a;
int sum=0;
int dfs(int node){
	sum+=node;
	for(int i=0;i<a[node].size();i++){
		dfs(a[node][i]);
	}
}

int main(){
	int n;
	cin>>n;
	a.clear();
	a.resize(n+1);
	
	for(int i=1;i<n;i++){
		int x,y;
		cin>>x;
		cin>>y;
		a[x].push_back(y);
	}
	dfs(1);
	cout<<"Sum is : "<<sum<<endl;
}
