#include<bits/stdc++.h>
using namespace std;

struct element{
    int data;
    int priority;
};

element heap[10];
int N;

void siftUp(int i){
    while(i>1 && heap[i/2].priority < heap[i].priority){
        swap(heap[i/2].data,heap[i/2].data);
        swap(heap[i/2].priority,heap[i/2].priority);
        i = i/2;
    }
}

void siftDown(int i){
    while(2*i <= N){
        int j = 2*i;
        if(j<N && heap[j].priority < heap[j+1].priority) j++;
        if(heap[i].priority > heap[j].priority) break;
        swap(heap[i].data,heap[j].data);
        swap(heap[i].priority,heap[j].priority);
        i=j;
    }
}
int insertHeap(int val,int p){
    if(N>=10){
        cout<<"OVERFLOW"<<endl;
        return -1;
    }
    ++N;
    heap[N].data = val;
    heap[N].priority = p;
    siftUp(N);
}

element extractMax(){
    if(N<1){
        cout<<"Empty Heap"<<endl;
    }
    element MAX = heap[1];
    swap(heap[1],heap[N--]);
    siftDown(1);
    return MAX;
}

int main(){
    /* --STL--
    priority_queue<int> pq; // MAX_HEAP
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    cout<<pq.top()<<endl;
    while(pq.size()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    */
    insertHeap(10,10);
    insertHeap(12,2);
    insertHeap(50,12);
    insertHeap(50,23);
    insertHeap(870,1);
    insertHeap(870,13);
    insertHeap(190,19);
    for(int i=0;i<3;i++){
        element xx = extractMax();
        cout<<xx.priority<<" "<<xx.data<<endl;
    }
}

/*
// Sir Approach:
#include<bits/stdc++.h>
using namespace std;
struct element{
    int data;
    int priority;
}heap[10];

int N;

void siftUp(int k){
    while(k>1 && heap[k/2].priority < heap[k].priority){
        swap(heap[k],heap[k/2]);
        k = k/2;
    }
}

void addInPq(int data,int priority){
    element e = {data,priority};
    heap[++N] = e;
    siftUp(N);
}

element getMax(){
    return heap[1];
}

bool isEmpty(){
    return N==0;
}

void siftDown(int k){
    while(2*k <= N){
        int j=2*k;
        if(j<N && heap[j].priority < heap[j+1].priority) j++;
        if(heap[k].priority > heap[j].priority) break;
        swap(heap[k],heap[j]);
        k = j;
    }
}

element extractMax(){
    element MAX = heap[1];
    swap(heap[1],heap[N--]);
    siftDown(1);
    return MAX;
}

int main(){
    addInPq(10,1);
    addInPq(11,2);
    addInPq(30,4);
    addInPq(320,10);
    element e = getMax();
    cout<<e.priority<<" "<<e.data<<endl;
    cout<<isEmpty()<<endl;
    element k = extractMax();
    cout<<k.priority<<" "<<k.data<<endl;
    k = extractMax();
    cout<<k.priority<<" "<<k.data<<endl;
    k = extractMax();
    cout<<k.priority<<" "<<k.data<<endl;
    k = extractMax();
    cout<<k.priority<<" "<<k.data<<endl;
    k = extractMax();
}
*/
