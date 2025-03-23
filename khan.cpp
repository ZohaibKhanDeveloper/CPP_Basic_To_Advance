#include<iostream>
using namespace std;
int main(){
	int arr1[2][2]={{3,4},{6,7}};
	int arr2[2][2]={{9,2},{1,2}};
	int c[2][2];
	int row=2,column=2,p=2;
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			c[i][j]=0;
			for(int k=0; k<p; k++){
				c[i][j]=c[i][j]+arr1[i][k]*arr2[k][j];
			}
		}
		cout<<endl;
	}
	cout<<"Matrix of AXB is "<<endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
