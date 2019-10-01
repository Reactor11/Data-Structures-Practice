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
int main(){
    enque(1);
    enque(2);
    enque(3);
    enque(4);
    enque(5);
    print();
    dequ();
    dequ();
    print();
    cout<<"Front Data : "<<front_data()<<endl;
    cout<<"Rear Data : "<<rear_data()<<endl;
    dequ();
    dequ();
    dequ();
    print();
}
