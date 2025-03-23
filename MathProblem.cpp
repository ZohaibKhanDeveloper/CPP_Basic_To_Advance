#include<iostream>
using namespace std;
int main(){
char opt;
float theta,r,l,result;
cout<<"\nProgram that find : \n";
cout<<"(a)Length of an arc.\t(b)Radius of the circle.\t(c)Theta of the circle.\n";
cout<<"***********************************************************************\n";
cout<<"Please select any one of the above options : ";
cin>>opt;
	switch(opt){
   case 'a':
   	cout<<"Enter the radius of the circle : ";
   	cin>>r;
   	cout<<"Now Enter angle value (Theta in Radian) : ";
   	cin>>theta;
   	result=r*theta;
      cout<<"The length of arc is : "<<result;
   break;
   case 'b':
   	cout<<"Enter the Length of the arc : ";
   	cin>>l;
   	cout<<"Now Enter angle value (Theta in Radian) : ";
   	cin>>theta;
      result=l/theta;
   	cout<<"The Radius of arc is : "<<result;
   break;
   case 'c':
   	cout<<"Enter the Length of the arc : ";
   	cin>>l;
   	cout<<"Now Enter Radius value : ";
   	cin>>r;
      result=l/r;
   	cout<<"The Theta of arc is : "<<result;
   break;
   default: cout<<"Invalid Selection.";
   }
return 0;
}
