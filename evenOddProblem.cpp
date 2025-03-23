#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num1,num2,num3,even[3]={0,0,0};
	char response;
	cout<<"Program that check 3 numbers whether they are even or odd.\n";
	do{
		cout<<"Enter 3 Numbers For Checking : \n";
		cin>>num1>>num2>>num3;
		if(num1%2==0) even[0]=1;
		if(num2%2==0) even[1]=1;
		if(num3%2==0) even[2]=1;
		if(even[0]==1&&even[1]==1&&even[2]==1) 
			cout<<"All Numbers are Even.";
		else if(even[0]==0&&even[1]==0&&even[2]==0) 
			cout<<"All Numbers are Odd";
		else{
			for(int i=0; i<3; i++)
				if(even[i]==1) cout<<"Number "<<i+1<<" is Even.\n";
				else cout<<"Number "<<i+1<<" is Odd.\n";
		}
	cout<<"Do You Want to check other numbers again.Press Y or y to perform again : ";
	response=getche();
	cout<<endl<<"---------------------------------------------------------\n";
	}
	while(response=='y'||response=='Y');
}
