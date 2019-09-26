#include<iostream>
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

node* add(node* head, int d){
	if(head == NULL){
		node* temp = new node(d);
		return temp;	
	}
	else{
		node* n = new node(d);
		node* temp = head;
		while(temp->next!=NULL) temp=temp->next;
		temp->next = n;
		return head;
	}
}

node* add_at_head(node* head,int d){
	if(head==NULL){
		node* temp = new node(d);
		return temp;
	}
	else{
		node* temp = new node(d);
		temp->next = head;
		head = temp;
		return head;
	}
	
}

void revnodes(node* head){
	if(head == NULL) return;
	else{
		revnodes(head->next);
		cout<<head->data<<" ";
	}
//	cout<<endl;
}

void len(node* head){
	int count=0;
	node* temp = head;
	while(temp!=NULL){
		count++;
		temp = temp->next;
	}
	cout<<"Count : "<<count<<endl;
//	return count;
}

void find_middle(node* head){
	node *slow=head,*fast=head;
	while(fast && fast->next){
		slow = slow->next;
		fast = fast->next->next;
	}
	cout<<"Middle Value : "<<slow->data<<endl;
}

node* del(node* head,int k){
	node *curr=head,*prev=head;
	if(head==NULL) return NULL;
	if(head->next == NULL){
		node* temp = head;
		head = NULL;
		delete temp;
		return head;
	}
	else if(head->data == k && head->next!=NULL){
		node* temp = head;
		head = head->next;
		delete temp;
		return head;
	}
	while(curr!=NULL){
		if(curr->data==k){
			prev->next = curr->next;
			node *temp = curr;
			delete temp;
			break;
		}
		prev = curr;
		curr = curr->next;
	}
	return head;
}


node* reverse(node* head){
	if(head==NULL) return head;
	else{
		node *curr,*prev,*next;
		curr=head;
		prev=NULL;
		while(curr!=NULL){
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}
		head = prev;
		return head;
	}
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
	node* head = NULL;
	head = add(head,1);
//	head = add(head,2);
//	head = add(head,5);
//	head = add_at_head(head,3);
//	head = add_at_head(head,3);
	print(head);
//	revnodes(head);
//	cout<<endl;
//	head = reverse(head);
//	print(head);
//	len(head);
//	find_middle(head);
	head = del(head,1);
	print(head);
}

