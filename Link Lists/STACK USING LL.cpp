#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node(int d){
			this->next=NULL;
			this->data=d;
		}
};

node* push(node* head,int d){
	node* temp = new node(d);
	if(head==NULL){
		return temp;
	}
	else{
		temp->next = head;
		head=temp;
		return head;
	}
}

node* pop(node* head){
	node* temp = head;
	head=head->next;
	delete(temp);
	return head;
}

int top(node* head){
	return head->data;
}

bool isEmpty(node* head){
	if(head == NULL) return true;
	else return false;
}

void print(node* head){
	node* temp = head;
	if(temp==NULL){
		cout<<"NO NODE."<<endl;
		return;
	}
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp =  temp->next;
	}
	cout<<endl;
}

int main(){
	node* head=NULL;
	head = push(head,1);
	head = push(head,2);
	head = push(head,3);
	head = push(head,4);
	head = push(head,5);
	print(head);
	cout<<top(head)<<endl;
	head = pop(head);
	print(head);
	cout<<isEmpty(head)<<endl;
}



