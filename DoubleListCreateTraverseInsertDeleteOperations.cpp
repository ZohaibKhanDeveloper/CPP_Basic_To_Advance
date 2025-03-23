#include<iostream>
using namespace std;
struct node{
	node *prev;
	int data;
	node *next;
};
void display_list(string statement,node *head){
	cout<<statement<<"[  ";
	node *ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<"  ";
		ptr=ptr->next;
	}
	cout<<"]";
}
node *addToEmpty(node *head,int data){
	node *temp=new node();
	temp->prev=NULL;
	temp->data=data;
	temp->next=NULL;
	head=temp;
	return head;
}
node *addAtBeg(node *head,int data){
	node *temp=new node();
	temp->prev=NULL;
	temp->data=data;
	temp->next=head;
	head->prev=temp;
	head=temp;
	return head;
}
node *addAtEnd(node *head,int data){
	node *temp,*tp;
	temp=new node();
	temp->prev=NULL;
	temp->data=data;
	temp->next=NULL;
	tp=head;
	while(tp->next!=NULL)
		tp=tp->next;
	tp->next=temp;
	temp->prev=tp;
	return head;
}
node *addAfterPos(node *head,int data,int pos){
	node *newP=NULL;
	node *temp=head;
	node *temp2=NULL;
	newP=addToEmpty(newP,data);
	while(pos!=1){
		temp=temp->next;
		pos--;
	}
	if(temp->next==NULL){
		temp->next=newP;
		newP->prev=temp;
	}
	else{
		temp2=temp->next;
		temp->next=newP;
		temp2->prev=newP;
		newP->next=temp2;
		newP->prev=temp;
	}
	return head;
}
node *CreateDoubleLinkedList(node *head){
	int n,data;
	cout<<"\nEnter number of nodes : ";
	cin>>n;
	if(n==0) return head;
	else{
		cout<<"Enter data for node 1 : ";
		cin>>data;
		head=addToEmpty(head,data);
		for(int i=1; i<n; i++){
			cout<<"Enter data for node "<<i+1<<" : ";
			cin>>data;
			head=addAtEnd(head,data);
		}
	}
	return head;
}
node *delete_First(node *head){
	head=head->next;
	delete(head->prev);
	head->prev=NULL;
}
node *delete_Last(node *head){
	node *temp=head;
	node *temp2;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp2=temp->prev;
	temp2->next=NULL;
	delete(temp);
	temp=NULL;
	return head;
}
node *delete_at_pos(node *head,int pos){
	node *temp=head;
	node *temp2=NULL;
	if(pos==1){
		head=delete_First(head);
		return head;
	}
	while(pos>1){
		temp=temp->next;
		pos--;
	}
	if(temp->next==NULL){
		head=delete_Last(head);
	}
	else{
		temp2=temp->prev;
		temp2->next=temp->next;
		temp->next->prev=temp2;
		delete(temp);
		temp=NULL;
	}
	return head;
}
node *reverse_list(node *head){
	node *ptr1=head;
	node *ptr2=ptr1->next;
	ptr1->next=NULL;
	ptr1->prev=ptr2;
	while(ptr2!=NULL){
		ptr2->prev=ptr2->next;
		ptr2->next=ptr1;
		ptr1=ptr2;
		ptr2=ptr2->prev;
	}
	head=ptr1;
	return head;
}
int main(){
	node *head;
	head=addToEmpty(head,10);
	display_list("Empty double link list after adding node : ",head);
	head=addAtBeg(head,20);
	head=addAtBeg(head,30);
	display_list("\nDouble link list after adding nodes at beggining : ",head);
	head=addAtEnd(head,40);
	head=addAtEnd(head,50);
	display_list("\nDouble link list after adding nodes at End : ",head);
	head=addAfterPos(head,60,3);
	display_list("\nDouble link list after adding node after position 3 : ",head);
	cout<<"\n<<~(Creating an Entire list by using user Defined Function)~>>";
	head=CreateDoubleLinkedList(head);
	display_list("\nDouble linked list in which user enter data at run time : ",head);
	head=delete_First(head);
	display_list("\nList after deleting First node : ",head);
	head=delete_Last(head);
	display_list("\nList after deleting Last node : ",head);
	head=delete_at_pos(head,4);
	display_list("\nList after deleting at position 4 : ",head);
	head=reverse_list(head);
	display_list("\nList after reversing : ",head);
	return 0;
}
