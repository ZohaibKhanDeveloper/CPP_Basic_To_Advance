#include<iostream>
using namespace std;
int main(){
	int Info[5]={3,6,7,2,9};
	int link[5]={4,999,1,0,2};
	int ptr=3;
	while(ptr!=999){
		cout<<Info[ptr]<<endl;
		ptr=link[ptr];
	}
	return 0;
}

