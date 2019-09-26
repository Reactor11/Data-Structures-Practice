#include <bits/stdc++.h> 
#include<unordered_set>
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

bool detectLoop(node* head){
	node *temp = head;
	unordered_set<node*> s;
	
	while(temp!=NULL){
		if(s.find(temp)!=s.end()) return true;
		s.insert(temp);
		temp = temp->next;	
	}
	return false;
}

int countNodes(node *n) 
{ 
   int res = 1; 
   node *temp = n; 
   while (temp->next != n) 
   { 
      res++; 
      temp = temp->next; 
   } 
   return res; 
} 



int detectLoop_twoPtr(node* head){
	node *slow=head,*fast=head;
	
	while(slow && fast && fast->next){
		slow =  slow->next;
		fast = fast->next->next;
		if(fast==slow) return countNodes(slow);
	}
	return 0;
}


int main(){
	node* head = NULL;
	head = insert_at_last(head,1);
	head = insert_at_last(head,2);
	head = insert_at_last(head,3);
	head = insert_at_last(head,4);
	head = insert_at_last(head,5);
	head = insert_at_last(head,6);
	head = insert_at_last(head,7);
	head->next->next->next->next = head;
	if(detectLoop(head)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	cout<<detectLoop_twoPtr(head)<<endl;
}

