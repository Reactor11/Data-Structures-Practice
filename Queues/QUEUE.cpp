#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int d){
        data = d;
        next = NULL;
    }
};
node *head=NULL,*rear=NULL;
void enque(int data){ // Time-Complexity : O(1)
    node* n = new node(data);
    if(head == NULL){
        head = n;
        rear = n;
    }
    else{
        if(rear->next==NULL)
            rear->next = n;
        rear = n;
    }
}

void dequ(){ // Time-Complexity : O(1)
    if(head==NULL) cout<<"EMPTY QUEUE.";
    else{
        node *temp = head;
        head = head->next;
        delete temp;
        if(head == NULL) rear = NULL;
    }
}

int front_data(){ // Time-Complexity : O(1)
    if(head==NULL) return -1;
    else return head->data;
}

int rear_data(){ // Time-Complexity : O(1)
    if(rear==NULL) return -1;
    else return rear->data;
}

void print(){
    node *temp = head;
    if(temp == NULL) cout<<"EMPTY";
    else
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void func(queue<int> &q){ // Reverse the queue
    if(q.empty()) return;
    else{
        int x;
        x = q.front();
        q.pop();
        func(q);
        q.push(x);
        // cout<<x<<" ";
    }
}

void func1(queue<int> &q,int k){ // Reverse after first k elements
    if(!q.empty() && k!=0 && k<=q.size()){
            int x;
            x = q.front();
            q.pop();
            func1(q,k-1);
            q.push(x);
    }
    else return;
    func(q);
}

void func2(queue<int> &q,int k){ // Reverse first k elements.
    stack<int> s;
    int cnt=0;
    while(cnt++<k){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    cnt=0;
    while(cnt++ < q.size()-k){
        q.push(q.front());
        q.pop();
    }
}

int main(){
    // enque(1);
    // enque(2);
    // enque(3);
    // enque(4);
    // enque(5);
    // print();
    // dequ();
    // dequ();
    // print();
    // cout<<"Front Data : "<<front_data()<<endl;
    // cout<<"Rear Data : "<<rear_data()<<endl;
    // dequ();
    // dequ();
    // dequ();
    // print();

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    func1(q,1);
    cout<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
