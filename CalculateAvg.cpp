#include<iostream>
using namespace std;
float calculateAverage(int[5]);
int main(){
	int marks[5];
	cout<<"C++ Program that calculate average of 5 subject marks of a student.\n";
	cout<<"--------------------------------------------------------------\n";
	cout<<"Enter 5 subjects marks of the student : \n";
	for(int i=0; i<5; i++){
		cin>>marks[i];
	}
	cout<<"The average marks of the student is : "<<calculateAverage(marks);
	return 0;
}
float calculateAverage(int m[5]){
	int sum=0;
	for(int i=0; i<5; i++){
		sum+=m[i];
	}
	float avg=sum/5.0;
	return avg;
}
