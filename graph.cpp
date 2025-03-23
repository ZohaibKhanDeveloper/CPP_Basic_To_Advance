#include<conio.h>
using namespace std;
int main(){
	int d,m,r,co,x1;
	d=DETECT;
	initgraph(&d,&m," ");
	cleardevice();
	for(co=1,x1=1; x1<=640; co++,x1+=5){
		setcolor(co);
		line(320,240,x1,0);
		if(co>=15){
			co=1;
		}
	}
	closegraph();
	return 0;
}
