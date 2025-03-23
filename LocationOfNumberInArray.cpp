#include<iostream>
using namespace std;
int main(){
	int nums[5],i,pos=0,n;
	cout<<"Enter any five numbers in array : \n";
	for(i=0; i<5; i++){
		cin>>nums[i];
	}
	cout<<"Now Enter a number to find its location in array : \n";
	cin>>n;
	for(i=0; i<5; i++){
		if(n==nums[i]){
			pos=i+1;
			break;
		}
	}
	if(pos==0){
		cout<<"Number not found! Try again.";
	}
	else{
		cout<<"Array declared with the name of \"nums[5]\"\n";
		cout<<"Number found at location "<<pos<<endl;
		cout<<"nums["<<pos-1<<"]"<<" = "<<n<<endl;
	}
	return 0;
}
