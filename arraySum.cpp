#include<iostream>
using namespace std;
int main(){
	int numbers1[5],numbers2[5],sum[5];
	cout<<"Finding sum of arrays,storing and printing array values.\n";
	cout<<"----------------------------First Array----------------------------\n";
	for(int i=0; i<5; i++){
		cout<<"Enter number "<<i+1<<" : ";
		cin>>numbers1[i];
	}
	cout<<"----------------------------Second Array----------------------------\n";
	for(int i=0; i<5; i++){
		cout<<"Enter number "<<i+1<<" : "; 
		cin>>numbers2[i];
	}
	cout<<"Sum of respective elements in last array : \n";
	for(int i=0; i<5; i++){
		sum[i]=numbers1[i]+numbers2[i];
		cout<<"Array Sum["<<i<<"] = "<<sum[i]<<endl;
	}
	return 0;
}
