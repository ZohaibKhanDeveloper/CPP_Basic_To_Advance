#include<iostream>
using namespace std;
int main(){
	//Try it Fellows.(Yesterday Lecture Practice).
	cout<<"Another Array Program.\n";
	cout<<"----------------------------\n";
	float values[5]={1.2,1.4,1.5,5.7,9.8};
	float values2[5]={3.2,1.9,5.5,4.7,8.8};
	cout<<"The sum of Elements in array are : \n";
	for(int a=0; a<=4; a++){
		cout<<values[a]<<" + "<<values2[a]<<" = "<<values[a]+values2[a]<<"\n";
	}
	return 0;
}
