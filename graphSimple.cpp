#include<iostream>
#include<graphics>
using namespace std;
int main(){
	int d,m;
	d=DETECT;
	initgraph(&d,&m," ");
	cleardevice();
	bar3d(100,50,120,300,10,1);
	closegraph();
	return 0;
}
