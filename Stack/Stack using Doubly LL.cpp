#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *next,*prev;
        node(int d){
            data = d;
            next = NULL;
            prev = NULL;
        }
};

node *mid = NULL;
int cnt=0;

node* push(node *head,int data){
    node *newnode = new node(data);
    newnode->next = head;
    if(head!=NULL) head->prev = newnode;
    else mid = newnode;
    head = newnode;
    cnt+=1;
    if(cnt%2 == 0) mid = mid->prev;
    return head;
}

node *pop(node *head){
    if(head == NULL) return head;
    node *temp = head;
    head = head->next;
    if(head->next!=NULL)    head->next->prev = NULL;
    delete temp;
    cnt--;
    if(cnt%2 != 0) mid = mid->next;
    return head;
}

void middle(){
    if (mid == NULL)
        cout<<"-1"<<endl;
    else
        cout<<mid->data<<endl;
}

node *delmid(node* top){
	if(mid == NULL) return NULL;
	node* temp = mid;
	if(mid->prev != NULL) mid->prev->next = mid->next;
	if(mid->next != NULL) mid->next->prev = mid->prev;
	cnt--;
	if(cnt%2 != 0) mid = mid->prev;
	else	mid = mid->next;
	if(mid == NULL) top = NULL;
	delete temp;
	return top;
}

int main(){
    node *head = NULL;
    head = push(head,10);
    head = push(head,20);
    head = push(head,30);
    middle();
    head = pop(head);
    head = pop(head);
    cout<<endl;
    middle();
}
