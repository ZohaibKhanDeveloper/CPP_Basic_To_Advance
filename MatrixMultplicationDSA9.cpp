//Matrix Multiplication CH#04 ARRAYS, RECORDS, & POINTERS 
#include<iostream>
using namespace std;
int main(){
	int A[2][2]={ {2,4},{6,8} };
	int B[2][2]={ {3,6},{2,6} };
	int m=2,p=2,n=2;
	int C[2][2];
//	Step-I
	for(int i=0; i<m; i++){
//		Step-II
		for(int j=0; j<m; j++){
//			Step-III
			C[i][j]=0;
//			Step-IV
			for(int k=0; k<p; k++){
				C[i][j]=C[i][j]+A[i][k]*B[k][j];
			}
		}
	}
	cout<<"Matrix C = (A X B): \n";
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<"\t"<<C[i][j]<<"   ";
		}
		cout<<"\n";
	}
	return 0;
}
