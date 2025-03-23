#include<iostream>
using namespace std;
int main(){
	int info[5]={5,3,4,2,1};
	int link[5]={4,999,1,0,2};
	int loc=0,item=4,ptr=3;
	while(ptr!=999){
		if(item=info[ptr]){
			loc=ptr;
		}
		else{
			ptr=link[ptr];
		}
	}
	cout<<"Item On Location "<<item<<endl;
}
