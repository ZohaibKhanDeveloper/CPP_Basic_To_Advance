#include<iostream>
using namespace std;
class InvestInProducts2;
	class InvestInProducts1{
		private:
			float products_amount1,expense_amount1;
		public:
		void setAmounts1(float pam1,float eam1){
			products_amount1=pam1; expense_amount1=eam1;			
		}
		friend void total_invested_amount(InvestInProducts1,InvestInProducts2);
	};
	class InvestInProducts2{
		private:
			float products_amount2,expense_amount2;
		public:
		void setAmounts2(float pam2,float eam2){
			products_amount2=pam2; expense_amount2=eam2;			
		}
		friend void total_invested_amount(InvestInProducts1,InvestInProducts2);
	};
	void total_invested_amount(InvestInProducts1 prodA,InvestInProducts2 prodB){
		cout<<"Total Products Amount is : "<<(prodA.products_amount1+prodB.products_amount2);
		cout<<"\nTotal Expense Amount is : "<<(prodA.expense_amount1+prodB.expense_amount2);
	}
int main(){
	cout<<"Class program that use friend functionto calculate total investements in products.\n";
	cout<<"----------------------------------------------------------------------------------\n";
	InvestInProducts1 prod1; InvestInProducts2 prod2;
	prod1.setAmounts1(3999.00,999.0);
	prod2.setAmounts2(4999.00,999.0);
	total_invested_amount(prod1,prod2);
	return 0;
}
