#include<iostream>
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

node* insert_at_last(node* head,int data){
	node* temp = head;
	node* new_node = new node(data);
	if(temp == NULL) return new_node;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = new_node;
	return head;
}

bool search_iterative(node* head,int key){
	node* temp = head;
	while(temp!=NULL){
		if(temp->data == key) return true;
		temp = temp->next;
	}
	return false;
}

bool search_recursive(node* head,int key){
	if(head == NULL) return false;
	else if(head->data == key) return true;
	else return (search_recursive(head->next,key));
}

int main(){
	node* head=NULL;
	head = insert_at_last(head,1);
	head = insert_at_last(head,2);
	head = insert_at_last(head,3);
	head = insert_at_last(head,4);
	head = insert_at_last(head,5);
	if(search_iterative(head,51)) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	
	if(search_recursive(head,51)) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
