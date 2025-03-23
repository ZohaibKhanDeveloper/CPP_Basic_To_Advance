//Binary search Ch#04 ARRAYS, RECORDS, & POINTERS
#include<iostream>
using namespace std;
int main(){
	int data[10]={2,4,6,8,10,12,14,16,18,20},item=4,loc;
//	Step-I
	int beg=0,end=9,mid=int((beg+end)/2);
//	Step-II
	while(beg<=end&&data[mid]!=item){
//		Step-III
		if(item<data[mid])
			end=mid-1;
		else
			beg=mid+1;
//		Step-IV
		mid=int((beg+end)/2);
	}
//	Step-V
	if(data[mid]==item)
		loc=mid+1;
	else
		loc=0;
	cout<<"Location of the item is : "<<loc;
	return 0;	
}
