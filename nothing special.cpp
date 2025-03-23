#include<iostream>
using namespace std;
int main(){
	float s,i;
	s=0.0;
	i=1.0;
	while(i<=10.0){
		s=s+1.0/i;
		cout<<"\n\n"<<1<<"/"<<i;
		i++;
	}
	cout<<"\n\n-> The sum of the series is : "<<s;
}
