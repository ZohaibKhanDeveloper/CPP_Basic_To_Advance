#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char ch,opt;
	string alphabets="abcdefghijklmnopqrstuvwxyz";
	int codes[26];
	for(int i=97,j=0; i<123,j<26; i++,j++){
		codes[j]=i;
	}
	cout<<"Program that check an alphabatic key code which will help you in future.\n";
	cout<<"Just Enter an alphabat and check the code Easily.\n";
	cout<<"<---------------------------------------------------->\n";
//  loop for checking correct codes in array.
//	for(int i=0; i<26; i++){
//		cout<<codes[i]<<"  ";
//	}
	cout<<"If program shows no alphabet key code then the Entered character will not be an alphabet.\n";
	do{
		cout<<"Enter an alphabet to check code : "; cin>>ch;
		for(int i=0; i<26; i++){
			if(ch==alphabets[i]){
				cout<<"Key Code : "<<codes[i]<<endl;
			}
		}
		cout<<"Terminate program by pressing 0 key.Check another by pressing Enter Key.";
		opt=getche();
		cout<<endl;
	}
	while(opt!='0');
	return 0;
}
