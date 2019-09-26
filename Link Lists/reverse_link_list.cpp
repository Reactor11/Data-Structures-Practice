#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node *next;
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
	cout<<endl;
}

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

node* reverse_iterative(node* head){
	node *current,*next,*prev;
	prev = NULL;
	current = head;
	while(current!=NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	return head;
}

void reversePrint_recursion(node* head) {
    if(head == NULL) return;
    reversePrint_recursion(head->next);
    cout<<head->data<<" ";
}

int main(){
	node *head = NULL;
	head = insert_at_last(head,1);
	head = insert_at_last(head,2);
	head = insert_at_last(head,3);
	head = insert_at_last(head,4);
	head = insert_at_last(head,5);
	printList(head);	
	head = reverse_iterative(head);
	printList(head);
	reversePrint_recursion(head);
}
