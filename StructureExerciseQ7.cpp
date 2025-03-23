#include<iostream>
using namespace std;
	struct personal_Data{
		char name[20],city[20],country[20];
		int code;
	};
int main(){
	int i;
	personal_Data person[2],temp;
	//temp is a temprory st-var above
	cout<<"Simple C++ program that swap two structures.\n";
	cout<<"-----------------------------------------------\n";
	for(i=0; i<2; i++){
		cout<<"Enter person "<<i+1<<" Name : ";
		cin>>person[i].name;
		cout<<"Now Enter city "<<i+1<<" Name : ";
		cin>>person[i].city;
		cout<<"Now Enter country "<<i+1<<" Name : ";
		cin>>person[i].country;
		cout<<"Great!!Now Enter person "<<i+1<<" Code : ";
		cin>>person[i].code;
	}
//		copying person 1 data into temp-var
		for(int j=0; person[0].name[j]!='\0'; j++){
		temp.name[j]=person[0].name[j];
		person[0].name[j]='\0';
		}
		for(int j=0; person[0].city[j]!='\0'; j++){
		temp.city[j]=person[0].city[j];
		person[0].city[j]='\0';
		}
		for(int j=0; person[0].country[j]!='\0'; j++){
		temp.country[j]=person[0].country[j];
		person[0].country[j]='\0';
		}
		temp.code=person[0].code;
//		copying person 2 data into person 1 
		for(int j=0; person[1].name[j]!='\0'; j++){
		person[0].name[j]=person[1].name[j];
		}
		for(int j=0; person[1].city[j]!='\0'; j++){
		person[0].city[j]=person[1].city[j];
		}
		for(int j=0; person[1].country[j]!='\0'; j++){
		person[0].country[j]=person[1].country[j];
		}
		person[0].code=person[1].code;
//		copying temp-var data into person 2
		for(int j=0; temp.name[j]!='\0'; j++){
		person[1].name[j]=temp.name[j];
		}
		for(int j=0; temp.city[j]!='\0'; j++){
		person[1].city[j]=temp.city[j];
		}
		for(int j=0; temp.country[j]!='\0'; j++){
		person[1].country[j]=temp.country[j];
		}
		person[1].code=temp.code;
//		Now Displaying the swapped data.
	cout<<"---------------Swapped Structures Result----------------\n";
	for(i=0; i<2; i++){
		cout<<"Person "<<i+1<<" Name : "<<person[i].name<<endl;
		cout<<"City "<<i+1<<" Name : "<<person[i].city<<endl;
		cout<<"Country "<<i+1<<" Name : "<<person[i].country<<endl;
		cout<<"Person "<<i+1<<" Code : "<<person[i].code<<endl;
	}
	return 0;
}
