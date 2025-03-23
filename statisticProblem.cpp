#include<iostream>
using namespace std;
int main(){
	int numbers[20],ranges[11]={0,10,20,30,40,50,60,70,80,90,100};
	int info[10];
	cout<<"Enter 50 random values : "<<endl;
	for(int i=0; i<20; i++){
		cin>>numbers[i];
	}
	for(int i=0,j=0; i<20,j<10; i++,j++){
		if(numbers[i]>ranges[j]&&numbers[i]<ranges[j+1]){
			info[j]++;
		}
	}
	cout<<"RANGES\t\tVALUES\n";
	cout<<"00-10\t\t"<<info[0]<<endl;
	cout<<"10-20\t\t"<<info[1]<<endl;
	cout<<"20-30\t\t"<<info[2]<<endl;	
	cout<<"30-40\t\t"<<info[3]<<endl;
	cout<<"40-50\t\t"<<info[4]<<endl;
	cout<<"50-60\t\t"<<info[5]<<endl;
	cout<<"60-70\t\t"<<info[6]<<endl;
	cout<<"70-80\t\t"<<info[7]<<endl;
	return 0;
}
