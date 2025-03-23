//Largest Element in an array. Ch#02 PARLIMINARIES
#include<iostream>
using namespace std;
int main(){
	char DATA[5];
	cout<<"Enter any 5 Alphabets: \n";
	for(int i=0; i<5; i++){
		cin>>DATA[i];
	}
	//step-I
	int LOC=0,K=0;
	char MAX=DATA[0];
	//step-II
	while(K<=4){
		//step-III
		if(MAX<DATA[K]){
			MAX=DATA[K];
			LOC=K;
		}
		//Step-IV
		K=K+1;
	}
	//Step-V
	cout<<"Location of the Maximum Alphabet "<<MAX<<" is "<<LOC+1;
	cout<<"\n-<(NOTE: Array First Element is at 0 index.So it the last I add 1 with Location)>-\n";
	return 0; 
}
