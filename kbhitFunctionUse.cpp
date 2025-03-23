#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int r=1;
	while(!kbhit()){
		gotoxy(30,r);
		cout<<"Welcome!!!\a";
		gotoxy(30,r);
		clreol();
		r++;
		if(r==24) r=1;
	}
	return 0;
}
