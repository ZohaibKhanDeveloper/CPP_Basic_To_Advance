#include<iostream>
using namespace std;
#define MAX 10
int stack[MAX]={2,4,6,8};
int top=3;
bool isFull(){
	if(top==MAX-1)
		return true;
	else 
		return false;
}
bool isEmpty(){
	if(top==-1)
		return true;
	else 
		return false;
}
void push(int data){
	if(isFull()){
		cout<<"Stack overflow.";
		exit(0);
	}
	else{
		top=top+1;
		stack[top]=data;
	}
}
void pop(){
	if(isEmpty()){
		cout<<"Stack Underflow.";
		exit(0);
	}
	else{
		stack[top]=0;
		top=top-1;
	}
}
void print_stack(string statement){
	cout<<statement<<": [ ";
	for(int i=0; i<=top; i++)
		cout<<stack[i]<<" ";
	cout<<"]\n";
}
int main(){
	print_stack("Stack of original Data");
	push(10);
	print_stack("Stack after pushing 10");
	for(int i=1; i<5; i++)
		push(i*3);
	print_stack("Stack after pushing 3 multiple of loop iterator");
	pop();
	pop();
	print_stack("Stack after calling pop() function 2 times");
	return 0;
}
