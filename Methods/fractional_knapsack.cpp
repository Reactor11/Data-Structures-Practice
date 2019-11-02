#include<bits/stdc++.h>
using namespace std;

struct item{
    int value,weight;
};

bool comp(item i,item j){
    return double(i.value/i.weight) > double(j.value/j.weight);
}


int main(){
    item a[] = {{100,30},{70,20},{40,40}};
    sort(a,a+3,comp);
    int capacity=60,cw=0;
    double val=0;
    for(int i=0;i<3;i++){
        if(cw+a[i].weight <= capacity){
            cw+=a[i].weight;
            val+=a[i].value;
        }
        else{
            val+=(capacity-cw) * double(a[i].value / a[i].weight);
        }
    }
    cout<<val<<endl;
}
