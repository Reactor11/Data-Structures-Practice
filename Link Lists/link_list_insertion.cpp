#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node(int d){
			this->data = d;
			this->next = NULL;
		}
};

void printList(node *n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n = n->next;
	}
}

node* insert_at_last(node* head,int data){
	node* temp = head;
	node* new_node = new node(data);
	
	if(temp == NULL) return new_node;
	
	while(temp->next != NULL) temp = temp->next;
	
	temp->next = new_node;
	return head;
}

node* insert_at_beg(node* head,int data){
	node* temp = head;
	node* new_node = new node(data);
	if(temp == NULL){
		return new_node;
	}
	new_node->next = head;
	head = new_node;
	return head;
}

void insert_in_between(node* prev_node,int data){
	node* temp = prev_node;
	if(temp == NULL){
		cout<<"Previous Node Cannot be NULL."<<endl;
		return ;
	}
	node* new_node = new node(data);
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	return;
	
}

int main(){
	node* ll = NULL;
	ll = insert_at_last(ll,12);
	ll = insert_at_last(ll,13);
	ll = insert_at_last(ll,14);
	ll = insert_at_last(ll,15);
	ll = insert_at_beg(ll,5);
	ll = insert_at_beg(ll,4);
	ll = insert_at_beg(ll,3);
	ll = insert_at_beg(ll,2);
	ll = insert_at_beg(ll,1);
	insert_in_between(ll,25);
	insert_in_between(ll,26);
	insert_in_between(ll,27);

	printList(ll);
}
