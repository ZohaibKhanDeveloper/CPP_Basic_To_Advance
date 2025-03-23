/* Name:Zohaib khan. Class No:221335
   Assignment : classes program Q5 
   OOP part-I By Sir TAUSEEEF UR REHMAN.
   Assignment No.02  */
#include<iostream>
using namespace std;
	class max_value_in_array{
		private:
			int arr[5],max;
		public:
			void TakeValues(){
				cout<<"Enter any five random numbers : \n";
				for(int i=0;i<5; i++){
					cin>>arr[i];
				}
			}
			void find_max(){
				max=arr[0];
				for(int i=0;i<5; i++){
					if(arr[i]>max)
						max=arr[i];
				}
			}
			void print_max(){
				cout<<"Maximum value in array is : "<<max;
			}
	};
	int main(){
		cout<<"Class program that find maximum value in array.\n";
		cout<<"-----------------------------------------------\n";
		max_value_in_array numbers;
		numbers.TakeValues();
		numbers.find_max();
		numbers.print_max();
		return 0;
	}
	
	
