#include<iostream>
using namespace std;
int main(){
	int sum=0;
	cout<<"Even numbers from 50 to 2 are : \n";
		for(int i=50; i>=2; i-=2){
			cout<<i<<"\t";
			sum=sum+i;
		}
	cout<<endl;
	cout<<"The sum of Even Numbers : "<<sum;
	return 0;
}
