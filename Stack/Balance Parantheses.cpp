#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> s;
    string c;
    cin>>c;

    for(int i=0;i<c.length();i++){
        if(c[i] == '(' || c[i] == '[' || c[i] == '{' || c[i] == '<') s.push(c[i]);
        else{
            if(c[i] == ')' && s.top() == '(') s.pop();
            if(c[i] == '}' && s.top() == '{') s.pop();
            if(c[i] == ']' && s.top() == '[') s.pop();
            if(c[i] == '>' && s.top() == '<') s.pop();
        }
    }
    if(s.empty()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;1
}
