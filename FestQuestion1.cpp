#include<iostream>
using namespace std;
int main(){
	int i,n,dif=0;
	cout<<"How many you want to check Enter length of Elements : "; cin>>n;
	int arr[n],count=0;
	cout<<"Enter your values only "<<n<<" is allowed in input : \n";
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	for(i=0; i<n; i++){
		for(int j=arr[i]; j>=1; j--){
			if(arr[i]%j==0){
				count++;
			}
			else{
				dif++;
			}
		}
		if(count==2){
		cout<<"\nWould you Beleived it; it is prime.";
	}
	else{
		cout<<"\nMissed it out by that much "<<dif;
	}
	count=dif=0;
	}
	
}

