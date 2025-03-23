#include<iostream>
#include<string.h>
using namespace std;
#define MAX 100
char stack[MAX],infix[MAX],postfix[MAX];
int top=-1;
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
void push(char data){
	if(isFull()){
		cout<<"Stack overflow.";
		exit(0);
	}
	else{
		top=top+1;
		stack[top]=data;
	}
}
char pop(){
	char poped_character;
	if(isEmpty()){
		cout<<"Stack Underflow.";
		exit(0);
	}
	else{
		poped_character=stack[top];
		stack[top]='-';
		top=top-1;
	}
	return poped_character;
}
void print_stack(string statement){
	cout<<statement<<": [ ";
	for(int i=0; i<=top; i++)
		cout<<stack[i]<<" ";
	cout<<"]\n";
}
int precedence(char symbol){
	switch(symbol){
		case '^':
			return 3;
			break;
		case '/':
		case '*':
			return 2;
		case '+':
		case '-':
			return 1;
		default:
			return 0;
	}
}
void infix_to_post(){
	int i,j=0;
	char symbol,next;
	for(i=0; i<strlen(infix); i++){
		symbol=infix[i];
		if(symbol=='('){
			push(symbol);
				break;
		}
		else if(symbol==')'){
			while(next=pop() != '(' ){
					postfix[j++]=next;
				}
		}
		else if(symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/'||symbol=='^'){
			while(!isEmpty() && precedence(stack[top]) >= precedence(symbol))
					postfix[j++]=pop();
				push(symbol);
		}
		else{
			postfix[j++]=symbol;
		}		
	}
}
void print_postfix(string statement){
	cout<<statement<<": [";
	for(int i=0; i<=top; i++)
		cout<<postfix[i]<<" ";
	cout<<"]";
}
int main(){
	cout<<"Enter an infix expression : ";
	gets(infix);
	print_postfix("Equivalent postfix expression is");
	return 0;
}
