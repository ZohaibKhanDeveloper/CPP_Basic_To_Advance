#include<iostream>
using namespace std;
	class addition{
		private:
			int n1,n2;
		public:
			void getValues(int a,int b){
				n1=a;
				n2=b;
			}
			void printSum(){
				cout<<n1<<" + "<<n2<<" = "<<n1+n2;
			}
	};
	int main(){
		cout<<"Simple program that add two numbers using class.\n";
		int x,y;
		addition sum;
		cout<<"Enter First number : "; cin>>x;
		cout<<"Enter Second number : "; cin>>y;
		sum.getValues(x,y);
		sum.printSum();
		return 0;
	}
