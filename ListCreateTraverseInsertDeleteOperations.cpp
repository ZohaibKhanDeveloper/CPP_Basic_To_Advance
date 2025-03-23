#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
void display_list(string statement,node *head){
	cout<<statement<<"[  ";
	node *ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<"  ";
		ptr=ptr->link;
	}
	cout<<"]";
}
node *add_at_beg(node *head,int d){
	node *ptr=new node();
	ptr->data=d;
	ptr->link=head;
	head=ptr;
	return head;
}
void add_at_end(node *head,int d){
	node *temp=new node();
	temp->data=d;
	temp->link=NULL;
	node *ptr=head;
	while(ptr->link!=NULL)
		ptr=ptr->link;
	ptr->link=temp;
}
void add_at_pos(node *head,int d,int pos){
	node *ptr=head;
	node *ptr2=new node();
	ptr2->data=d;
	ptr2->link=NULL;
	pos--;
	while(pos!=1){
		ptr=ptr->link;
		pos--;
	}
	ptr2->link=ptr->link;
	ptr->link=ptr2;
}
node *delete_first(node *head){
	node *temp=head;
	if(head==NULL){
		cout<<"Underflow.List is empty.\n";
	}
	else{
		head=head->link;
		delete(temp);
	}
	return head;
}
node *delete_last(node *head){
	node *temp=head;
	node *temp2=head;
	if(head==NULL){
		cout<<"Underflow.List is empty.\n";
	}
	else if(head->link==NULL){
		delete(head);
		head=NULL;
	}
	else{
		while(temp->link!=NULL){
			temp2=temp;
			temp=temp->link;
		}
		temp2->link=NULL;
		delete(temp);
		temp=NULL;
	}
	return head;
}
void delete_at_pos(node **head,int pos){
	node *current=*head;
	node *previous=*head;
	if(*head==NULL){
		cout<<"Underflow.List is Empty.\n";
	}
	else if(pos==1){
		*head=current->link;
		delete(current);
		current=NULL;
	}
	else{
		while(pos!=1){
			previous=current;
			current=current->link;
			pos--;
		}
		previous->link=current->link;
		delete(current);
		current=NULL;
	}
}
int main(){
	node *head=new node();
	head->data=3;
	head->link=NULL;
	node *current=new node();
	current->data=45;
	current->link=NULL;
	head->link=current;
	current=new node();
	current->data=98;
	current->link=NULL;
	head->link->link=current;
	current=new node();
	current->data=99;
	current->link=NULL;
	head->link->link->link=current;
	display_list("Simple link List : ",head);
	head=add_at_beg(head,102);
	display_list("\nLink list after insertion at the beggining : ",head);
	add_at_end(head,104);
	display_list("\nLink list after insertion at the end : ",head);
	add_at_pos(head,57,4);
	display_list("\nLink list after insertion at the position 4 : ",head);
	head=delete_first(head);
	display_list("\nLink list after deleting first node : ",head);
	head=delete_last(head);
	display_list("\nLink list after deleting last node : ",head);
	delete_at_pos(&head,2);
	display_list("\nLink list after deleting node at position 2 : ",head);
	return 0;
}
