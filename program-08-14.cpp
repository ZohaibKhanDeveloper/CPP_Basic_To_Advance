#include<iostream> 
using namespace std;
	class x;
	class y;
	class x{
		private:
			int m;
		public:
			x(){ m=20; }
			friend int sum(x,y);
	};
	class y{
		private:
			int n;
		public:
			y(){ n=10; }
		friend int sum(x,y);
	};
	int main(){
		x obj1; y obj2;
		cout<<"Class Program that access private data using friend function.\n";
		cout<<"Sum of 20 and 10 is : "<<sum(obj1,obj2);
		return 0;
	}
	int sum(x obj1,y obj2){
		return obj1.m+obj2.n;
	}
	
	
	
