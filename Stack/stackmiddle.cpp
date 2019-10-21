#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *next;
	node *prev;
};
node *mid=NULL;
int cnt;
node* push(node *head,int data)
{
	node *newnode=new node;
	newnode->data=data;
	if(head==NULL)
	{
		newnode->next=NULL;
		newnode->prev=NULL;
		mid=newnode;
		head=newnode;
		
	}
	else
	{
		newnode->next=head;
		newnode->prev=NULL;
		head->prev=newnode;
		head=newnode;
		
	}
	cnt++;
	if(cnt%2==0)
	{
		mid=mid->prev;
	}
	return head;
}
node* pop(node *head)
{
	if(head==NULL)
	{
		cout<<"Underflow"<<endl;
		return head;
	}
	else if(head->next==NULL)
	{
		head=NULL;
		return head;
	}
	head=head->next;
	head->prev=NULL;
	cnt--;
	if(cnt%2!=0)
	{
		mid=mid->next;
	}
	return head;
	
}
void print(node *head)
{
	node *curr=head;
	while(curr!=NULL)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}

void middle(node *head)
{
	if(head==NULL)
	{
		cout<<"NO list";
		return;
	}
	cout<<mid->data<<endl;
}

main()
{
	node *head=NULL;
	head=push(head,10);
	head=push(head,20);
	head=push(head,30);
	head=push(head,40);
	head=push(head,50);
	print(head);
	cout<<endl;
	middle(head);
	head=pop(head);
	head=pop(head);
	head=pop(head);
	head=pop(head);
	head=pop(head);
	cout<<endl;
	print(head);
	cout<<endl;
	middle(head);
}
