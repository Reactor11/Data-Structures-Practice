#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int start[n],end[n];
    for(int i=0;i<n;i++) cin>>start[i];
    for(int i=0;i<n;i++) cin>>end[i];
    int count=1,finish=end[0];
    cout<<count<<" ";
    for(int i=1;i<n;i++)
        if(start[i] >= finish){
            cout<<i+1<<" "; // gives activity number
            count++;
            finish = end[i];
        }
    cout<<endl;
    cout<<"Number of activity : "<<count<<endl;
}
