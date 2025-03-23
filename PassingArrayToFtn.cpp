#include<iostream>
using namespace std;
	void Num_Find(int nums[5],int n){
		int pos=0;
		int *address=nums;
		for(int i=0; i<5; i++){
			if(n==nums[i]){
				pos=i;
				break;
			}
			address++;
		}
		if(pos==0) cout<<"Number Not found!";
		else{
		cout<<"Number Found at location : "<<pos<<endl;
		cout<<"Address of the number in RAM : "<<address;
		}
	}
int main(){
	int numbers[5],ns;
	cout<<"C++ Program that Find the location of a number in array.\n";
	cout<<"Enter any 5 Random numbers in array : \n";
	for(int i=0; i<5; i++){
		cin>>numbers[i];
	}
	cout<<"Now Enter a number to search : ";
	cin>>ns;
	Num_Find(numbers,ns);
	return 0;
}
