#include<iostream>
using namespace std;
int main(){
	int arr[5][3],max,rowNo,columnNo;
	cout<<"2D array Program that find the location of maximum Number in array.\n";
	cout<<"Enter values in 5 X 3 Array : \n";
	for(int i=0; i<5; i++){
		for(int j=0; j<3; j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Two Dimensional array is : \n";
	for(int i=0; i<5; i++){
		for(int j=0; j<3; j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	max=arr[0][0];
	for(int i=0; i<5; i++){
		for(int j=0; j<3; j++){
			if(max<arr[i][j]){
				max=arr[i][j];
				rowNo=i+1; columnNo=j+1;
			}
		}
	}
	cout<<"Maximum Number in array is : "<<max;
	cout<<"\nElement Row Number is "<<rowNo<<" and column Number is "<<columnNo;
	return 0;
}
