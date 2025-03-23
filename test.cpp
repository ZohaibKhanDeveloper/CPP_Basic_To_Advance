#include<iostream>
#include<iomanip>
using namespace std;
struct studentD{
	char name[20];
	float avg,total=0,sub[4],percentage;
};
int main(){
	studentD st[3];
	for(int i=0; i<3; i++){
		cout<<"Enter Name of the student "<<i+1<<" : ";
		gets(st[i].name);
		cout<<"Now Enter 4 subject marks of the student : \n";
		for(int j=0; j<4; j++){
			cin>>st[i].sub[j];
			st[i].total+=st[i].sub[j];
			st[i].avg=st[i].total/4;
			st[i].percentage=(st[i].total/400)*100;
	}
		cout<<endl;
	}
	cout<<"NAMES \t TOTAL-MARKS\t  OBT-MARKS\t  AVEG-MARKS\t  PERCENTAGE\n";
	cout<<"---------------------------------------------------------------------\n";
	for(int i=0; i<3; i++){
		puts(st[i].name);
		cout<<endl;
		cout<<st[i].name<<"\t\t"<<400<<"\t\t"<<st[i].total<<"\t\t"<<st[i].avg<<"\t\t"<<st[i].percentage<<endl;
	}
	return 0;
}


