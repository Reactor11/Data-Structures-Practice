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
	
//	cout<<a.size()<<endl;
	int count=0;
	for(int i=1;i<=n;i++){
		if(a[i].size() == 0) count++;
//		cout<<i<<" "<<a[i].size()<<endl;
	}
	cout<<"Number of leaves in the tree are : "<<count<<endl;
	return 0;
}
