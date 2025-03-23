//Deleting Item from array Ch#04 ARRAYS, RECORDS, & POINTERS
#include<iostream>
using namespace std;
int main(){
	int linA[10]={1,2,3,4,5,6,7,8},k=4,n=8;
//	Step-I
	int item=linA[k],j;
//	Step-II
	for(j=k; j<n-1; j++){
		linA[j]=linA[j+1];
	}
//	Step-III
	n=n-1;
	cout<<"Array After deleting 5 from location-V : \n";
	for(int i=0; i<n; i++) cout<<linA[i]<<"  ";
	return 0;
}
