#include<iostream>
using namespace std;
int main(){
	int subject_marks[6],sum=0,avg;
	for(int i=0; i<6; i++){
		cout<<"Enter marks of subject "<<i+1<<" : ";
		cin>>subject_marks[i];
		sum=sum+subject_marks[i];	
	}
	avg=sum/6;
	cout<<"\nYour Total marks is : "<<sum<<"\n";
	cout<<"Your average marks is : "<<avg<<endl;
	return 0;
}
