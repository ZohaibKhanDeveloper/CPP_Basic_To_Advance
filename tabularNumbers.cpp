#include<iostream>
using namespace std;
int main(){
	int count=1,i=1;
	while(count<=3){
		if(i==1){
			int a=1;
			while(a<=5){
				cout<<a<<"\t";
				a++;
			}
			cout<<endl;
		}
		else if(i==2){
			int a=1;
			while(a<10){
				cout<<a<<"\t";
				a+=2;
			}
			cout<<endl;
		}
		else{
			int a=1;
			while(a<14){
				cout<<a<<"\t";
				a+=3;
			}
			cout<<endl;
		}
		count++;
		i++;
	}
	return 0;
}
