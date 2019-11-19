#include<bits/stdc++.h>
using namespace std;
#define fast_veet ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define fi(x,n) for(ll i=x;i<n;i++)
#define fj(x,n) for(ll j=x;j<n;j++)
#define fdi(x,n) for(ll i=x-1;i>=n;i--)
#define fdj(x,n) for(ll j=x-1;j>=n;j--)
#define debug(x) cout<<#x<<" "<<x<<endl
#define mem(x,val) memset((x),(val),sizeof(x))
#define pb push_back
#define rtcheck cout<<"Working Till Here."<<endl;exit(0);
#define inf 1e18
#define endl "\n"
#define mod 1000000007

class node{
	public:
		int data;
		node* next;
		node(int d){
			data = d;
			next = NULL;
		}
};
class d_node{
	public:
		int data;
		d_node* next;
		d_node* prev;
		d_node(int d){
			next = NULL;
			prev = NULL;
			data = d;
		}
};
void print(node* head){
	if(head == NULL) return;
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
void print_d(d_node* head){
	if(head == NULL) return;
	d_node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
node* insert_at_last(node* head,int data){
	node* new_node = new node(data);
	node* temp = head;
	if(temp == NULL) return new_node;
	while(temp->next != NULL) temp = temp->next;
	temp->next = new_node;
	return head;
}
node* insert_at_beg(node* head,int data){
	node* new_node = new node(data);
	node* temp = head;
	if(temp == NULL) return new_node;
	new_node->next = head;
	head = new_node;
	return head;
}
node* delete_node_given_key(node* head,int key){
	node* temp = head, *prev;
	if(temp == NULL) return head;
	if(temp != NULL && temp->data == key){
		head = head->next;
		return head;
	}
	while(head!=NULL && head->data!=key){
		prev = temp;
		temp = temp->next;
	}
	if(temp == NULL) return head;
	prev->next = temp->next;
	free(temp);
	return head;
}
node* delete_node_given_pos(node* head,int pos){
	if(head == NULL) return head;
	node* temp = head;
	if(pos==0){
		head = head->next;
		free(temp);
		return head;
	}
	for(int i=0;i<pos-1&&temp!=NULL;i++){
		temp = temp->next;
	}
	if(temp->next == NULL || temp == NULL) return head;
	node* next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return head;
}
void printMiddle(node* head){
	node* temp = head,*fast = head,*slow = head;
	if(temp!=NULL){
		while(fast && fast->next){
			fast = fast->next->next;
			slow = slow->next;
		}
		cout<<slow->data<<endl;
	}
}
node* removeDuplicatesSorted(node* head){
    /* Pointer to traverse the linked list */
    node* current = head;

    /* Pointer to store the next pointer of a node to be deleted*/
    node* next_next;

    /* do nothing if the list is empty */
    if (current == NULL)
    return head;

    /* Traverse the list till last node */
    while (current->next != NULL){
    /* Compare current node with next node */
    if (current->data == current->next->data)
    {
        /* The sequence of steps is important*/
        next_next = current->next->next;
        free(current->next);
        current->next = next_next;
    }
    else /* This is tricky: only advance if no deletion */
    {
        current = current->next;
    }
    }
	return head;
}
node* removeDuplicatesUnsorted(node *start){
    // Hash to store seen values
    unordered_set<int> seen;

    /* Pick elements one by one */
    struct node *curr = start;
    struct node *prev = NULL;
    while (curr != NULL)
    {
        // If current value is seen before
        if (seen.find(curr->data) != seen.end())
        {
           prev->next = curr->next;
           delete (curr);
        }
        else
        {
           seen.insert(curr->data);
           prev = curr;
        }
        curr = prev->next;
    }
	return start;
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
node* removeOccurenceNumber(node* head){
	return head;
}
bool isPalindrome_stack(node* head){
	node* temp = head;
	stack<int> s;
	while(temp!=NULL){
		s.push(temp->data);
		temp = temp->next;
	}
	temp = head;
	while(temp!=NULL){
		int i=s.top();
		if(i!=temp->data) return false;
		temp = temp->next;
		s.pop();
	}
	return true;
}

d_node *e=NULL;
d_node* doubly_insert_at_beg(d_node* head,int data){
	d_node* new_node = new d_node(data);
	if(head == NULL) return new_node;
	else{
		new_node->next = head;
		head->prev = new_node;
		head = new_node;
		return head;
	}
}
d_node* doubly_insert_at_end(d_node* head,int data){
	d_node* new_node = new d_node(data);
	if(head == NULL){
		head = new_node;
		e = head;
		return new_node;
	}
	else{
		d_node* temp = head;
		while(temp->next != NULL) temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
		e = new_node;
		return head;
	}
}
d_node* left_rotate(d_node* head){
	if(head == NULL) return head;
	else if(head->next == NULL) return head;
	else{
		d_node* temp = head;
		head = head->next;
		e->next = temp;
		temp->prev = e;
		temp->next = NULL;
		e = temp;
		return head;
	}
}
d_node* right_rotate(d_node* head){
	if(head == NULL) return head;
	else if(head->next == NULL) return head;
	else{
		d_node* temp = e->prev;
		e->prev->next = NULL;
		e->prev = NULL;
		e->next = head;
		head->prev = e;
		head = e;
		e = temp;
		return head;
	}
}


int main(){
    fast_veet;
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif

	d_node* head = NULL;
	for(int i=1;i<=10;i++){
		head = doubly_insert_at_end(head,i);
		// head = insert_at_beg(head,1);
		// print(head);
	}
	// printMiddle(head);
	// cout<<endl;
	// for(int i=0;i<11;i++){
		// head = delete_node_given_pos(head,0);
	// 	cout<<endl;
	// }
	for(int i=0;i<=10;i++){
	print_d(head);
	head = right_rotate(head);
	cout<<endl;
}
	// print_d(head);
	// head = right_rotate(head);
	// cout<<endl;
	// print_d(head);
	// cout<<endl;
	// head = removeDuplicatesUnsorted(head);
	// print(head);
	// head = reverse(head);
	// cout<<endl;
	// print(head);
    return 0;
}
