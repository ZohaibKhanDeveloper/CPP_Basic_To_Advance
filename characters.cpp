#include<iostream>
using namespace std;
int main(){
	for(int i=32; i<258; i++){
		if(i==40||i==60||i==80||i==100){
			cout<<endl;
		}
		cout<<char(i)<<" ";
	}	
}
