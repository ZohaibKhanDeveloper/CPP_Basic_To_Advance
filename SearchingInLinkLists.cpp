//Searching in a link list Ch#05 LINKED LISTS
#include<iostream>
using namespace std;
int main(){
	char info[10]={'A','O','H','Z','I','K','B','A','H','N'};
	int null=10,loc=null;
	char item='H';
	int link[10]={4,2,0,1,6,8,5,9,7,null};
	int ptr=3;
	while(ptr!=null){
		if(info[ptr]==item){
			loc=ptr;
			cout<<"Item found at "<<loc+1;
			exit(0);
		}
		else ptr=link[ptr];
	}
	if(loc==null){
		cout<<"Item not found.";
	}
	return 0;
}
