#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node(int d){
			this->data=d;
			this->next=NULL;
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

bool isPalindrome_stack(node* head){
	node* temp=head;
	stack<int> s;
	while(temp!=NULL){
		s.push(temp->data);
		temp = temp->next;
	}
	temp = head;
	while(temp!=NULL){
		int i=s.top();
		if(temp->data!=i) return false;
		s.pop();
		temp = temp->next;
	}
	return true;
}
int main(){
	node *head = NULL;
	head = insert_at_last(head,1);
	head = insert_at_last(head,2);
	head = insert_at_last(head,2);
	head = insert_at_last(head,2);
	head = insert_at_last(head,1);
	if(isPalindrome_stack(head)) cout<<"Yes";
	else cout<<"No";

}














