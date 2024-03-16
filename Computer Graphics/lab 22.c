/*Program for 3D scaling*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<graphics.h>
int x1,x2,y1,y2,mx,my,depth;
void draw();
void scale();
void main()
{
	int gd=DETECT,gm,c;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	printf("\n\t\t3D Scaling\n");
	printf("\nEnter 1st top value(x1,y1):");
	scanf("%d%d",&x1,&y1);
	printf("Enter right bottom value(x2,y2):");
	scanf("%d%d",&x2,&y2);
	depth=(x2-x1)/4;
	mx=(x1+x2)/2;
	my=(y1+y2)/2;
	draw();
	getch();
	cleardevice();
	scale();
	getch();
}

void draw()
{
	bar3d(x1,y1,x2,y2,depth,1);
	outtextxy(x1+25,y1-15,"Object");
}
void scale()
{
	int x,y,a1,a2,b1,b2,dep;
	printf("\n\n Enter scaling Factors:");
	scanf("%d%d",&x,&y);
	a1=mx+(x1-mx)*x;
	a2=mx+(x2-mx)*x;
	b1=my+(y1-my)*y;
	b2=my+(y2-my)*y;
	dep=(a2-a1)/4;
	bar3d(a1,b1,a2,b2,dep,7);
	outtextxy(a1+25,b1-15,"Image");
	setcolor(3);
	draw();
}