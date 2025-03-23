#include<iostream>
using namespace std;
class Bankaccount{
	private:
		int id,account_num;
		static float min_blc;
		public:
			Bankaccount(int x,int ac_n){
				id=x; account_num=ac_n;
			}
			int getid(){
				return id;
			}
			int getaccountnum(){
				return account_num;
			}
			static float getminblc(){
				return min_blc;
			}
		};
			float Bankaccount::min_blc=20000;
		   int main(){
		     Bankaccount customer1(105,12345),customer2(107,34567);
			 cout<<"customer 1 details \n";
			 cout<<"customer 1 id ";
			 cout<<customer1.getid();
			 cout<<"\ncustomer account no";
			 cout<<customer1.getaccountnum();
			 cout<<"\nminmum balance";
			 cout<<customer1.getminblc();
			 cout<<"\ncostomer 2 details";
			 cout<<"\ncustomer 2 id";
			 cout<<customer2.getid();
			 cout<<"costomemr 2 account no";
			 cout<<customer2.getaccountnum();
			 cout<<"minimum balance";
			 cout<<Bankaccount::getminblc();
			 return 0;  	
		   }	
			
