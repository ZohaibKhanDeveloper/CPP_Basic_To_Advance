#include<iostream>
using namespace std;
int main(){
	int count=6;
	for(int i=6; i>=1; i--){
		cout<<"X";
		if(i>=1){
			count--;
			i=count;
			cout<<endl;
		}
	}
	return 0;
}
