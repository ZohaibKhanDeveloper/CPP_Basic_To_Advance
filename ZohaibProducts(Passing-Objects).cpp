#include<iostream>
using namespace std;
	class product{
		private:
			float p1_price,p2_price;
		public:
			void setPrices(float pr1,float pr2){
				p1_price=pr1; p2_price=pr2;
			}
			void showPrices(){
				cout<<"Price 1: \""<<p1_price<<"\"  ";
				cout<<"Price 2: \""<<p2_price<<"\"  ";
			}
			void copyPrices(product p){
				p1_price=p.p1_price;
				p2_price=p.p2_price;
			}
			product sumOfPrices(product obj){
				product sum;
				sum.p1_price=p1_price+obj.p1_price;
				sum.p2_price=p2_price+obj.p2_price;
				return sum;
			}
	};
	int main(){
		product p1,p2,p3,p4;
		p1.setPrices(999.5,1999.5);
		p2.setPrices(499.5,299.55);                      
		cout<<"Class program having member functions that accept object as an argument.\n";
		cout<<"----------------------------------------------------------------------\n";
		cout<<"\t~(*1st Product Prices*)~\n";
		p1.showPrices();
		cout<<"\n\t~(*2nd Product Prices*)~\n";
		p2.showPrices();
		p3.copyPrices(p2);
		cout<<"\n\t~(Copied prices to 3rd Product)~\n";
		p3.showPrices();
		p4=p3.sumOfPrices(p1);
		cout<<"\n\t~(Prices sum of Product 3 & 1)~\n";
		p4.showPrices();
		return 0;
	}
