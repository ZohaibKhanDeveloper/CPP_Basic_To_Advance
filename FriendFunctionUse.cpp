#include<iostream>
using namespace std;
class testFriend2;
	class testFriend1{
		private:
			int a;
		public:
			void setA(int x){ a=x; }
			friend void friendFtn(testFriend1,testFriend2);
	};
	class testFriend2{
		private:
			int b;
		public:
			void setB(int x){ b=x; }
			friend void friendFtn(testFriend1,testFriend2);
	};
	int main(){
		testFriend1 tfo1;
		testFriend2 tfo2;
		tfo1.setA(10);
		tfo2.setB(20);
		cout<<"Class program that use a friend function.\n";
		cout<<"------------------------------------------\n";
		friendFtn(tfo1,tfo2);
		return 0;
	}
	void friendFtn(testFriend1 obj1,testFriend2 obj2){
		cout<<"The sum of "<<obj1.a<<" & "<<obj2.b<<" is = "<<(obj1.a+obj2.b);
	}
