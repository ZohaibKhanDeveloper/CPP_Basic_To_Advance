/*
Name : Zohaib Khan 
class no. BSCS-221335 
Section A 6th Semester 
Instructor : Sir Zubair
Subject : Computer Science
Assignment #01 Compiler Construction
ISLAMIA COLLEGE PESHAWER (CHARETERED UNIVERSITY)
*/
#include<iostream>
#include<fstream>
using namespace std;
string checkWord(string word){
	int len = word.length();
	string msg;
	if(len%2==0)
		msg = "Invalid";
	else
		msg = "Valid";	
	return msg;
}
int main(){	
	char ch;
	ifstream file("ProgramNotes\\CC-Assignment-File.txt");
	string fileText="",word="";
	while(file){
		file.get(ch);
		fileText += ch;
	}
	cout<<"-(TEXT INSIDE THE FILE)-\n"<<fileText<<endl;
	cout<<"<-------------------------------------->\n";
	cout<<"[Words]\t[Status]\n";
	for(int i=0; fileText[i]!='\0'; i++){
		if(fileText[i]!=' ')
			word += fileText[i];
		else{
			cout<<"\""<<word<<"\""<<" : "<<checkWord(word)<<endl;	
			word = "";
		}
	}
	return 0;
}
