#include<iostream>   
using namespace std; 
int main(){
	int nums[4]={6,18,2,4};
	cout<<"Unsorted Array = ";
	for(int i=0; i<4; i++){
		cout<<nums[i]<<"\t";
	}
	//sorting by selection method
	for(int i=0; i<3; i++){
		for(int j=i+1; j<4; j++){
			if(nums[j]<nums[i]){
				int t=nums[i];
				nums[i]=nums[j];
				nums[j]=t;
			}
		}
	}
	cout<<"\nSorted Array is (Ascending Order) = ";
	for(int i=0; i<4; i++){
		cout<<nums[i]<<"\t";
	}
	cout<<"\nSorted Array is (Descending Order) = ";
	for(int i=3; i>=0; i--){
		cout<<nums[i]<<"\t";
	}
	return 0;
}
