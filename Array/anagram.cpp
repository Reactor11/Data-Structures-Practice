#include<iostream>
using namespace std;
int main(){
	string s="abcd",t="dcbaa";
	int f1[26]={0},f2[26]={0};
// Approach 1 : Time-Complexity - O(N), Space-Complexity - O(N)
	if(s.size()!=t.size()) cout<<"NO";
	else{
		for(int i=0;i<s.size();i++) {
			f1[s[i] - 'a']++;
			f2[t[i] - 'a']++;
		}
		for(int i=0;i<26;i++){
			if(f1[i]!=f2[i]){
				cout<<"NO";
				break;
			}
		}
		cout<<"YES"<<endl;
	}
	return 0;
}
