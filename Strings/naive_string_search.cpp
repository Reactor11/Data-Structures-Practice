#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string p;
    getline(cin,s);
    getline(cin,p);

    // Approach 1:

    for(int i=0;i<s.length();i++){
        int k=i,c=0;
        for(int j=0;j<p.length();j++){
            if(s[k]==p[j]){
                k++;
                c++;
            }
            else break;
        }
        if(c==p.length()){
            cout<<i<<endl;
        }
    }

    // Approach 2:

    int i,j;
    for(i=0;i<=s.size()-p.size();i++){
        for(j=0;j<p.size();j++)
            if(s[i+j]!=p[j]) break;
        if(j==p.size())
            cout<<i<<endl;
    }

}
