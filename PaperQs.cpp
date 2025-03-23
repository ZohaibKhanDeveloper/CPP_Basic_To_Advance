#include<iostream>
using namespace std;
int main(){
	int info[7]={50,20,0,30,10,40,0};
	//let null=10
	int null=10,ptr=4,loc=null,item=40;
	int link[7]={0,3,0,5,1,0};
	while(ptr!=null){
		if(item>info[ptr]){
			ptr=link[ptr];
		}
		else if(item==info[ptr]){
			loc=ptr; 
			cout<<"Item found at location "<<loc+1;
			exit(0);
		}
		else{
			loc=null; 
			cout<<"Search unsuccessfull.";
			exit(0);
		}
	}
	loc=null;
	return 0;
}
