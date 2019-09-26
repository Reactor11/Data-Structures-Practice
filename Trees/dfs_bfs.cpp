#include<bits/stdc++.h>
using namespace std;
/*
15
1 2
1 3
2 4
2 5
4 8
4 9
5 10
5 11
6 12
6 13
7 14
7 15
3 6
3 7
*/
vector<vector<int>> a;
void dfs(int node){
	cout<<node<<" ";
	for(int i=0;i<a[node].size();i++){
		dfs(a[node][i]);
	}
}

void bfs(int node){
	queue<int> q;
	q.push(node);
	while(!q.empty()){
		int x = q.front();
		cout<<x<<" ";
		q.pop();
		for(int i=0;i<a[x].size();i++) q.push(a[x][i]);
	}
}
void inputTree(int n){
		a.clear();
		a.resize(n+1);
		for(int i=1;i<n;i++){
			int x,y;
			cin>>x;
			cin>>y;
			a[x].push_back(y);
	}
}

void printTree(int n){
	for(int i=0;i<n+1;i++){
		for(int j=0;j<a[i].size();j++){
			cout<<"NODE "<<i<<" is connected to "<<a[i][j]<<endl;
		}
	}
}
int main(){
	int n;
	cin>>n;
	inputTree(n);
	printTree(n);
	dfs(10);
	cout<<endl;
	bfs(10);
	return 0;
	
}
