#include<iostream>
#include<stdio.h>
using namespace std;
	class strings{
		private:
			char str1[50],str2[50];
			int len1,len2,len;
		public:
		void length(){
			cout<<"Enter First string : "; gets(str1);
			cout<<"Enter Second string : "; gets(str2);
			for(int i=0; str1[i]!='\0'; i++) len1++;
			for(int i=0; str2[i]!='\0'; i++) len2++;
			len=len1+len2;
		}
		void copy(){
			char str[len];
			for(int i=0; str1[i]!='\0'; i++) str[i]=str1[i];
			for(int i=len1,j=0; i<len,j<len2; i++,j++) str[i]=str2[j];
			cout<<"\nString 2 copied to string 1 (Whole string is): \""<<str<<"\"";
			cout<<"\nLength of the string is : "<<len;
		}
	};
	int main(){
		strings str;
		cout<<"Class Program that copy strings and find its length.\n";
		cout<<"----------------------------------------------------\n";
		str.length();
		str.copy();
		return 0;
	}
	
	
