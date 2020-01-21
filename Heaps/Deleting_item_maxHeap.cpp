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
    heap[++N] = val;
    siftUp(N);
}

void siftDown(int i){
    while(2 * i <=N){
        int j = 2 * i;
        if(j<N && heap[j] < heap[j + 1]) j++;
        if(heap[i] > heap[j]) break;
        swap(heap[i],heap[j]);
        i = j;
    }
}

void decrease_key(int i,int val){
    heap[i] = val;
    siftDown(1);
}

int extractMax(){ // O(Log(N))
    if(N < 1){
        cout<<"Empty Heap"<<endl;
        return -1;
    }
    int MAX = heap[1];
    swap(heap[1],heap[N--]);
    siftDown(1);
    heap[N + 1] = NULL;
    return MAX;
}

int main(){
    insertHeap(10);
    insertHeap(20);
    insertHeap(30);
    insertHeap(99);
    insertHeap(9);
    insertHeap(8);
    insertHeap(1);
    insertHeap(2);
    insertHeap(100);
    for(int i=1;i<=N;i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;
    cout<<extractMax()<<endl;
    cout<<extractMax()<<endl;
    cout<<extractMax()<<endl;
    cout<<extractMax()<<endl;
    for(int i=1;i<=N;i++){
        cout<<heap[i]<<" ";
    }
}
