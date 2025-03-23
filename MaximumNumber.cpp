#include<iostream>
using namespace std;
int main()
{

char Data[5];
cout<<"Enter Any Five Alphabets"<<endl;
for(int i=0; i<=4; i++){
	cin>>Data[i];
}
int loc=0,T=0;
char MAX=Data[0];
while(T<=4){	
if(MAX<Data[T]){
	MAX=Data[T];
	loc=T;
}
T=T+1;
}

cout<<"Location of the Maximum Number "<<MAX<<" is "<<loc+1;


}


