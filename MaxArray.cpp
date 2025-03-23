#include<iostream>
using namespace std;
int main(){
	int nums[5],i,maximum,n=1;
	cout<<"Array Program that find the maximum value in array.";
	cout<<"\nNow Enter any five integer value : \n";
	for(i=0; i<5; i++){
		cin>>nums[i];
	}
	maximum=nums[0];
	for(i=0; i<5; i++){
		if(maximum<nums[i]){
			maximum=nums[i];
			++n;
		}
	}
	cout<<"The maximum value in array is : \n";
	cout<<"Element number (in array) : "<<n<<endl;
	cout<<"Maximum value : "<<maximum;
}
