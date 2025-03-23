//Search in Sorted link list CH#05 LINKED LISTS
#include<iostream> 
using namespace std;
int main(){
	int info[6]={20,40,30,90,45,70};
	int null=10,ptr=0,loc=null;
	int link[6]={2,4,1,null,5,3};
	int item=90;
	while(ptr!=null){
		cout<<info[ptr]<<" ";
		if(item>info[ptr]){
			ptr=link[ptr];
		}
		else if(item==info[ptr]){
			loc=ptr; cout<<"\nItem found at location "<<loc+1; exit(0);
		}
		else{
		 loc=null; cout<<"\nSearch unsuccessful."; exit(0);
		 }
	}
	return 0;
}
