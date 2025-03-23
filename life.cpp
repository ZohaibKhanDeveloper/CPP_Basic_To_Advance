#include<iostream>
using namespace std;
int main(){
	//Zohaib khan is _____________.
	char options[3][50]={"(a)Programmer","(b)Hacker","(c)Developer : "},opt;
	char answers[3][40]={"Lover","Hater","Poor"};
	cout<<"Choose any one of the given Options : (a/b/c)\n";
	for(int i=0; i<3; i++){
		cout<<options[i]<<"\t";
	}
	cin>>opt;
	if(opt=='a'){
		cout<<options[0]<<" are the true "<<answers[0];
	}
	else if(opt=='b'){
		cout<<options[1]<<" are decieved by someone and are broken "<<answers[1];
	}
	else if(opt=='c'){
		cout<<options[2]<<" are "<<answers[2]<<" people.";
	}
	else{
		cout<<"You've no feelings.You are very nill person.";
	}
	return 0;
}
