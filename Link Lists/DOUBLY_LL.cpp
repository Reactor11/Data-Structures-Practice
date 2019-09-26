#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node *next,*prev;
		node(int d){
			this->data = d;
			this->next = NULL;
			this->prev = NULL;
		}	
};

node* add_start(node *head,int d){
	node* n = new node(d);
	n->next = head;
	n->prev = NULL;
	if(head!=NULL){
		head->prev = n;
		head = n;
		return head;
	}
}

node* add_end(node *head,int d){
	if(head == NULL){
		node* n = new node(d);
		return n;
	}
	else{
		node* n = new node(d);
		node* curr = head;
		while(curr->next!=NULL){
			curr = curr->next;
		}
		n->prev = curr;
		n->next = NULL;
		curr->next = n;
		return head;
	}
}

void print(node *head){
	if(head == NULL){
		cout<<"NO NODE PRESENT."<<endl;
		return;
	}
	node *curr=head;
	cout<<"Forward : ";
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr = curr->next;
	}
	cout<<endl;
	curr = head;
	cout<<"Backward : ";
	while(curr->next!=NULL) curr = curr->next;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr = curr->prev;
	}
	cout<<endl;
}

node* del(node *head,int key){
//	cout<<head->data;
	if(head==NULL) return NULL;
	else if(head->data == key && head->next == NULL){
		node *temp = head;
		delete temp;
		return NULL;
	}
	else if(head->data == key){
		node *temp = head;
		head = head->next;
		head->prev = NULL;
		delete temp;
		return head;
	}
	else{
		node* temp = head,*prev;
		while(temp->data!=key){
			prev = temp;
			temp = temp->next;
		}
		if(temp->next == NULL){
			temp->prev->next = NULL;
			delete temp;
			return head;
		}
		prev->next = temp->next;
		temp->next->prev = prev;
		delete temp;
		return head;
	}
}

int main(){
	node *head=NULL;
	head = add_start(head,50);
//	head = add_start(head,40);
//	head = add_start(head,30);
//	head = add_start(head,20);
//	head = add_start(head,10);
	print(head);
	head = del(head,0);
	print(head);
}
