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
	
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = new_node;
	return head;
}

void printList(node *n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n = n->next;
	}
	cout<<endl;
}

void count_length_iterative(node *head){
	int count=0;
	node *temp = head;
	while(temp!=NULL){
		count++;
		temp = temp->next;
	}
	cout<<"Length of link list is : "<<count<<endl;
}

int count_length_recursive(node *head){
	if(head == NULL) return 0;
	return 1 + count_length_recursive(head->next);
}

int main(){
	node *head = NULL;
	head = insert_at_last(head,1);
	head = insert_at_last(head,2);
	head = insert_at_last(head,3);
	head = insert_at_last(head,4);
	head = insert_at_last(head,5);
	printList(head);	
	count_length_iterative(head);
	int len = count_length_recursive(head);
	cout<<"Length of link list is : "<<len<<endl;
}
