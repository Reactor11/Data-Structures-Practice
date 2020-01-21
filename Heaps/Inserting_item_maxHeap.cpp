// My Approach :
// #include<bits/stdc++.h>
// using namespace std;
//
// vector<long long int> v;
//
// void arrange(){
//     for(int i=1;i<v.size();i++){
//         if(v[i] < v[i*2] && i*2<v.size()) swap(v[i],v[i*2]);
//         if(v[i] < v[(i*2) + 1] && (i*2)+1 <v.size()) swap(v[i],v[(i*2) + 1]);
//     }
// }
//
// int main(){
//     int t;
//     cin>>t;
//     v.push_back(-1);
//     while(t--){
//         long long int x;
//         cin>>x;
//         v.push_back(x);
//         arrange();
//         for(int i=1;i<v.size();i++){
//             cout<<v[i]<<" ";
//         }
//         cout<<endl;
//     }
//     arrange();
//     for(int i=1;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }


// Sir Approach :
#include<bits/stdc++.h>
using namespace std;

int heap[10],N;

void siftUp(int i){
    while(i>1 && heap[i/2] < heap[i]){
        swap(heap[i/2],heap[i]);
        i = i / 2;
    }
}

void insertHeap(int val){ // O(Log(N))
    if(N >= 10){
        cout<<"OVERFLOW"<<endl;
        return -1;
    }
    heap[++N] = val;
    siftUp(N);
}

void increase_key(int i,int val){
    heap[i] = val;
    siftUp(i);
}

int main(){
    insertHeap(10);
    insertHeap(12);
    insertHeap(50);
    insertHeap(50);
    insertHeap(870);
    insertHeap(870);
    insertHeap(190);
    for(int i=1;i<N;i++){
        cout<<heap[i]<<" ";
    }

}
