#include<iostream>
using namespace std;
	int sum(){
		int x=200,y=300;
		return x+y;
	}
	int sum(int x,int y){
		 return x+y;
	}
	float sum(float x,float y,float z){
		return x+y+z;
	}
int main(){
  /*Note that the function name are same but numbers of parameters and type used
	in the function call are different to overload the same name function.*/
	cout<<"C++ Program that shows the different result of Function overloading.\n";
	cout<<"The result of the same name function (No Arguments) : "<<sum()<<endl;
	cout<<"The result of the same name function (2 Arguments) : "<<sum(33,34)<<endl;
	cout<<"The result of the same name function (3 Arguments) : "<<sum(2.1,2.4,1.9)<<endl;
	return 0;
}
