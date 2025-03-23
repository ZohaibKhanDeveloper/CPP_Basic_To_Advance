//Item insertion in array CH#04 ARRAYS, RECORDS, POINTERS
#include<iostream>
using namespace std;
int main(){
	int linA[10]={1,2,3,4,6,7,8},k=4,n=7,item=5;
//	Step-I
	int j=n;
//	Step-II
	while(j>=k){
//	Step-III
		linA[j+1]=linA[j];
//	Step-IV
		j=j-1;
	}
//	Step-V
	linA[k]=item;
//	Step-VI
	n=n+1;
	cout<<"Array After inserting 5 at location-V : \n";
	for(int i=0; i<n; i++) cout<<linA[i]<<"  ";
	return 0;
}
