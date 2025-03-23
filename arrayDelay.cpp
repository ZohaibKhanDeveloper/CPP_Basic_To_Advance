#include<iostream>
#include<dos.h>
using namespace std;
int main(){
	char str[15]="Pakistan";
	int i,l,c;
	gotoxy(32,1);
	cout<<str;
	for(i=0; str[i]!='\0'; i++){
		for(l=1; l<=22;l++){
			gotoxy(i+32,l);
			cout<<str[i];
			delay(50);
			gotoxy(i+32,l);
			cout<<" ";
		}
		gotoxy(i+32,l);
		cout<<str[i];
	}
	return 0;
}
