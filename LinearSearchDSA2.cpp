//Linear Searching in array. Ch#04 ARRAYS, RECORDS, POINTERS
#include<iostream>
using namespace std;
int main(){
	int data[10]={2,4,6,8,10,14,12,16,20,18},item;
	cout<<"Enter a number you want to search : ";
	cin>>item;
	//Step-I 
	int k=0,loc=0,n=10;
	//Step-II
	while(k<n){
		//Step-III
		if(item==data[k])	loc=k+1;
		//Step-IV
		k=k+1;
	}
	//Step-V
	if(loc==0) cout<<item<<" is not in the array data.\n";
	else cout<<loc<<" is the location of the Item "<<item;
	return 0;
}
