/*
Name : Zohaib Khan  
Class No. : BSCS-221335  
Section : A (6th Semester)  
Instructor : Sir Zubair  
Subject : Compiler Construction  
College : Islamia College Peshawar (Chartered University)
*/

#include<iostream>
#include<fstream>
using namespace std;

char buff[1000];
int forward = 0;

char next_char();
char lex_anal();
void read_from_file();

int main(){
    read_from_file();

    char t = lex_anal();
    cout <<"File Text Valid/Invalid [y/n] : "<< t << endl;
    return 0;
}

void read_from_file(){
    ifstream fin("ProgramNotes//CC-Assignment-File.txt");
    if(!fin){
        cout << "Error opening file!" << endl;
        exit(1);
    }
    fin.getline(buff, 1000); 
    fin.close();
}

char lex_anal(){
    int state = 1;
    char ch;
    while(1){
        ch = next_char();
        if(ch == '\0'){ 
            if(state == 2)
                return 'y'; 
            else
                return 'n'; 
        }
        if(ch == 'a' || ch == 'b'){
            // toggle state
            if(state == 1)
                state = 2;
            else
                state = 1;
        }
        else{
            cout << "Error\n";
            exit(1);
        }
    }
}

char next_char(){
    char c = buff[forward];
    forward++;
    return c;
}

