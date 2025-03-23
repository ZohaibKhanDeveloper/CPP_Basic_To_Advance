#include<iostream>
using namespace std;
int main(){
		char ask,op;
	do{
			cout<<"\n*****  Enter a value for table  ******\n";
	float tab,limit;
	cin>>tab;
	cout<<"Now Enter a limit of the table : ";
	cin>>limit;
		for(int i=1; i<=limit; i++){
			cout<<tab<<"*"<<i<<" = "<<tab*i;
			cout<<endl;
		}
		cout<<"\n\n-> Do you want another table so click Y/y otherwise N/n : ";
		cin>>ask;
		cout<<"\nWould you like to clear screen click T/t otherwise F/f : ";
		cin>>op;
		if(op=='T'||op=='t'){
			cout<<system("cls");
          }
	
	}
	while(ask=='Y'||ask=='y');
	return 0;
}
