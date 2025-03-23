#include<iostream> 
using namespace std;
	class Find_max_num{
		private:
			int max;
		public:
		Find_max_num(int a,int b){
			(a>b)?max=a:max=b;
			cout<<"Greater Number is "<<max<<endl;
		}
		Find_max_num(int nums[5]){
			max=nums[0];
			for(int i=0; i<5; i++){
				if(nums[i]>max)
					max=nums[i];
			}
			cout<<"Greater number is "<<max<<endl;
		}	
	};
	int main(){
		cout<<"Constructor overloading program that find maximum number : \n";
		int numbers[5]={2,4,10,3,1};
		Find_max_num nums1(25,26),nums2(numbers);
		return 0;
	}
