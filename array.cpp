#include<iostream>
using namespace std;
int main(){
	cout<<"\nSimple C++ array program : \n";
	cout<<"*****************************\n";
	char message[50]="Zehar lagta hai ye sara class.I hate Everyone.\n";
	cout<<message;//Another array is below.
	int phoneNum[11]={0,3,1,3,1,6,0,1,5,2,0};
	cout<<"If I create a problem for any one then chat on number : ";
	for(int i=0; i<11; i++){
		cout<<phoneNum[i];
	}
	return 0;
}
