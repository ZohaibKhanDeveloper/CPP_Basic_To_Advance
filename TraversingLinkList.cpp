//Traversing a link list CH#05 LINKED LISTS
#include<iostream>
using namespace std;
int main(){
	char info[10]={'A','O','H','Z','I','K','B','A','H','N'};
	int link[10]={4,2,0,1,6,8,5,9,7,10};
	int ptr=3;
	while(ptr!=10){
		cout<<info[ptr]<<" ";
		ptr=link[ptr];
	}
	return 0;
}
