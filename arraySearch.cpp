#include<iostream>
using namespace std;
int main(){
	int numbers[5],search,counter=0;
	cout<<"Enter values in the INTEGER array : \n";
	for(int i=0; i<5; i++){
		cin>>numbers[i];
	}	
	cout<<"Now Type a number to Search : ";
	cin>>search;
	for(int i=0; i<5; i++){
		if(search==numbers[i]){
			cout<<"Number Found at location number \""<<i<<"\""<<endl;
			cout<<"\"numbers["<<i<<"]\""<<" = "<<numbers[i];
			cout<<"\nElement number is "<<i+1<<" in array.";
		}
		else{
			counter++;
		}
	}
	if(counter==5){
		cout<<"Class bhi tum se nafrat karte hai. Koi chance nahi Mara Aha.!!!\n";
		cout<<"No GF or BF Found!!!.Sorry I mean your Entered number is Not Founded.";
	}
	return 0;
}
