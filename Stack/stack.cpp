#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};

node* push(node *head,int data)
{
	node *newnode=new node;
	newnode->data=data;
	if(head==NULL)
	{
		newnode->next=NULL;
		head=newnode;
		return head;
	}
	newnode->next=head;
	head=newnode;
	return head;
	
}
node* pop(node *head)
{
	if(head==NULL)
	{
		cout<<"Underflow"<<endl;
		return head;
	}
	if(head->next!=NULL)
	{
		head=head->next;
		return head;
	}
	head=NULL;
	return head;
}
void print(node *head)
{
	if(head==NULL)
	{
		cout<<"no list present"<<endl;
		return;
	}
	node *curr=head;
	while(curr!=NULL)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}
void peek(node*head)
{
	if(head==NULL)
	{
		cout<<"Underflow"<<endl;
		return;
	}
	cout<<head->data<<endl;
}

main()
{
	node *head=NULL;
	head=push(head,10);
	head=push(head,20);
	head=push(head,30);
	print(head);
	head=pop(head);
	head=pop(head);
	head=pop(head);
	head=pop(head);
	cout<<endl;
	print(head);
	cout<<endl;
	peek(head);
}
