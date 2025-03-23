#include<iostream>
using namespace std;
	float Maximum(float a,float b, float c,float d){
		float values[4]={a,b,c,d},max;
		max=values[0];
		for(int i=0; i<4; i++){
			if(max<values[i]){
				max=values[i];
			}
		}
		return max;
	}
int main(){
	float D_nums[4],larger;
	cout<<"C++ Program that find larger value using a function without using logical operators.\n";
	cout<<"------------------------------------------------------------------------------------\n";
	cout<<"Enter any 4 numbers [Decimal point Numbers (Float type)] : \n";
	for(int i=0; i<4; i++){
		cin>>D_nums[i];
	}
	larger=Maximum(D_nums[0],D_nums[1],D_nums[2],D_nums[3]);
	cout<<"Maximum Number out of Entered 4 Numbers : "<<larger;
	return 0;
}
