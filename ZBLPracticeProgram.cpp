#include<iostream>
using namespace std;
	class BankAccount{
		private:
			int id,account_num;
			static float min_blc;
		public:
			BankAccount(int x,int ac_n){
				id=x; account_num=ac_n; }
			int getId(){
				return id; }
			int getAccountNum(){
				return account_num; }
			static float getMinBlc(){
				return min_blc; }
	};
	float BankAccount::min_blc=20000;
	int main(){
		BankAccount customer1(123,130305),customer2(456,141416);
		cout<<"\t---***---(\"ZOHAIB BANK LIMITED\")---***---";
		cout<<"\n\t(\"Customer 1 Detail\") \n";
		cout<<"Customer 1 Id : "<<customer1.getId();
		cout<<"\nCustomer 1 Account Number : "<<customer1.getAccountNum();
		cout<<"\nMinimum Balance : "<<BankAccount::getMinBlc();
		cout<<"\n\t(\"Customer 2 Detail\")\n";
		cout<<"Customer 2 Id : "<<customer2.getId();
		cout<<"\nCustomer 2 Account Number : "<<customer2.getAccountNum();
		cout<<"\nMinimum Balance : "<<BankAccount::getMinBlc();
		return 0;
	}
