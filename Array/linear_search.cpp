#include<iostream>
using namespace std;

bool linear_search_recursion(int arr[],int n,int key,int i){
	if(arr[i] == key) return true;
	else if(i == n-1 && arr[i] != key) return false;
	else
	linear_search_recursion(arr,n,key,++i);
}

int main(){
	int arr[5] = {1,2,3,4,5};
	if(linear_search_recursion(arr,5,6,0)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
