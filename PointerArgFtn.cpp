#include<iostream>
using namespace std;
void pointer_arg(int *,int *);
int main(){
	int n1,n2;
	cout<<"Program that pass pointers as arguments to a function.\n";
	cout<<"-----------------------------------------------------\n";
	cout<<"Enter any two integer values : \n";
	cin>>n1>>n2;
	pointer_arg(&n1,&n2);
	cout<<"After swapping the values using pointer : \n";
	cout<<"Value 1 : \""<<n1<<"\"";
	cout<<"\nValue 2 : \""<<n2<<"\"";
	return 0;
}
void pointer_arg(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
