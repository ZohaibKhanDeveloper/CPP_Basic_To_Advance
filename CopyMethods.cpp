#include<iostream>
#include<string>
using namespace std;
	int main(){
		int arrN[5],copyN[5],i;
		string strI,strC; char chArr[100],copyChArr[100];
		cout<<"This Program will copy an array with diifferent method.";
		cout<<"\nEnter any five random number: \n";
		//Number Copying.
		for(i=0; i<5; i++){
			cin>>arrN[i]; //Taking Input from user using cin.
			copyN[i]=arrN[i]; //Copying array Element to another array.
		}
		for(i=0; i<5; i++) cout<<copyN[i]<<"\t";
		cout<<"\nNow Enter Elements in character array (Text Max Length : 100) : ";
		cin.ignore();
		gets(chArr);
		for(i=0; chArr[i]!='\0'; i++){ //without using any built in function.
		if(chArr[i]=='\0'){
				copyChArr[i]='\0';
			}
			else{ 
				copyChArr[i]=chArr[i];
			}
		}
		cout<<"\nAfter copying character array to another array : "<<copyChArr;
		cout<<"\nNow Enter another string : "; 
		getline(cin,strI);
		//Text Copying.
		strC=strI;// Copy string strI to strC.
		cout<<"String Copied to another string variable:\""<<strC<<"\"";
		return 0;
	}
