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

int GetNth_node(node *head,int index){
	node* temp = head;
	while(index-- && temp!=NULL){
		temp = temp->next;
	}
	if(temp == NULL) return -1;
	return temp->data;
	
}
int GetNth_node_from_last(node* head,int index){
	node* temp = head;
	int len=0;
	while(temp!=NULL){
		temp = temp->next;
		len++;
	}
	
	if(len<index) return -1;
	
	int l = len-index;
	temp = head;
	
	while(l--) temp = temp->next;
	
	return temp->data;
	
}

void GetNth_node_from_last_recursive(node* head,int index){
	static int i = 0;
	if(head == NULL) return ;
	GetNth_node_from_last_recursive(head->next,index);
	if(++i == index) cout<<head->data<<"\n";
	
}

void printMiddle(node* head){
	node *slow,*fast;
	slow = head;
	fast = head;
	if(head!=NULL){
	while(fast!=NULL && fast->next!=NULL){
		fast = fast->next->next;
		slow = slow->next;
		}
	}
	cout<<"MIDDLE VALUE : "<<slow->data<<endl;
}

int main(){
	node* ll = NULL;
	ll = insert_at_last(ll,12);
	ll = insert_at_last(ll,13);
	ll = insert_at_last(ll,14);
	ll = insert_at_last(ll,15);
	ll = insert_at_last(ll,10);
	ll = insert_at_last(ll,131);

//	int d = GetNth_node(ll,3);
//	cout<<d<<endl;
//	d = GetNth_node_from_last(ll,3);
//	cout<<d<<endl;
//	GetNth_node_from_last_recursive(ll,2);
	printMiddle(ll);
}
