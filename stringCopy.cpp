#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char show[8];
	for(int i=0; i<9; i++){
		strncpy(show,"PAKISTAN",i);
		cout<<show<<endl;
	}
	return 0;
}
