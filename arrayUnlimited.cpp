#include<iostream>
using namespace std;
	int main(){
		int numbers[300];
		int count=0;
		cout<<"Enter numbers continously but if you want to end the array Enter 0.\n";
		for(int i=0; i<300; i++){
			cin>>numbers[i];
			if(numbers[i]==0){
				numbers[i]=0;
				break;
			}
			count++;
		}
		int nums[count];
		for(int i=0; i<count; i++){
			nums[i]=numbers[i];
			cout<<nums[i]<<" ";
		}
		cout<<"\nSize of the final array is "<<count;
		return 0;
	}
