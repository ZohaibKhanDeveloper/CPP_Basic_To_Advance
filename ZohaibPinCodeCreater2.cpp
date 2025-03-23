#include<iostream>
using namespace std;
int main(){
	string name;
	cout<<"This program will create a pin code based on your name.Keep the name short or Enter only your first name.\n";
	cout<<"--<(-----------------------------------------------------------------------------------------------)>--\n";
	cout<<"Enter Your First name because the resultant pin length will be equal with the length of name : "; getline(cin,name);
	char pin[name.length()];
	for(int i=0; i<name.length(); i++){
		if(name[i]=='a'||name[i]=='A'||name[i]=='b'||name[i]=='B'||name[i]=='c'||name[i]=='C') 
			pin[i]='2'; // abc=2
		else if(name[i]=='d'||name[i]=='D'||name[i]=='e'||name[i]=='E'||name[i]=='f'||name[i]=='F') 
			pin[i]='3'; // def=3
		else if(name[i]=='g'||name[i]=='G'||name[i]=='h'||name[i]=='H'||name[i]=='i'||name[i]=='I') 
			pin[i]='4'; // ghi=4
		else if(name[i]=='j'||name[i]=='J'||name[i]=='k'||name[i]=='K'||name[i]=='l'||name[i]=='L') 
			pin[i]='5'; // jkl=5
		else if(name[i]=='m'||name[i]=='M'||name[i]=='n'||name[i]=='N'||name[i]=='o'||name[i]=='O') 
			pin[i]='6'; // mno=6
		else if(name[i]=='p'||name[i]=='P'||name[i]=='q'||name[i]=='Q'||name[i]=='r'||name[i]=='R'||name[i]=='s'||name[i]=='S') 
			pin[i]='7'; // pqrs=7
		else if(name[i]=='t'||name[i]=='T'||name[i]=='u'||name[i]=='U'||name[i]=='v'||name[i]=='V') 
			pin[i]='8'; // tuv=8
		else if(name[i]=='w'||name[i]=='W'||name[i]=='x'||name[i]=='X'||name[i]=='y'||name[i]=='Y'||name[i]=='z'||name[i]=='Z') 
			pin[i]='9'; // wxyz=9
		else if(name[i]=' ') 
			pin[i]='0'; //space=0
		else 
			pin[i]=='1'; //If any one of the above did'nt matched then the name must consist special characters.
	}
	cout<<pin;
	return 0;
}
