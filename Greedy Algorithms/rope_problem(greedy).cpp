// Given piece of ropes and we have to make it one, with minimum price possible .
#include<bits/stdc++.h>
using namespace std;

//int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++) cin>>arr[i];
//    sort(arr,arr+n);
//    int cost=arr[0]+arr[1];
//    int temp=cost;
//    for(int i=2;i<n;i++){
//    	temp += arr[i];
//    	cost+=temp;
//    	cout<<temp<<" "<<endl;
//    }
//    cout<<cost<<endl;
//}


int main(){
	int a[] = {4,5,3,1};
	int n = 4,total=0;
	vector<int> v;
	for(int i=0;i<n;i++){
		v.push_back(a[i]);
	}
	while(v.size() > 1){
		sort(v.begin(),v.end(),greater<int>());
		int first = v[v.size() - 1];
		int second = v[v.size() - 2];
		total += first + second;
		v.pop_back();
		v.pop_back();
		v.push_back(first+second);
	}
	cout<<total<<endl;
}
