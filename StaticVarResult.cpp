#include<iostream>
using namespace std;
	int st_var_results(int);
int main(){
	cout<<"C++ static variable program.\n";
	cout<<"---------------------------------\n";
	for(int i=1; i<5; i++){
		cout<<st_var_results(i)<<"\t";
	}
	return 0;
}
	int st_var_results(int n){
		static int a=5;
		a*=n;
		return a;
	}
