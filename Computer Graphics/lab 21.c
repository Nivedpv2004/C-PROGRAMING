/*Program for 3D Rotation*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
int x1,x2,y1,y2,mx,my,depth;
void draw();
void rotate();
void main()
{
	int gd=DETECT,gm,c;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	printf("\n3D Transformation Rotating");
	printf("\nEnter 1st top value(x1,y1):");
	scanf("%d%d",&x1,&y1);
	printf("\nEnter right bottom value(x2,y2):");
	scanf("%d%d",&x2,&y2);
	depth=(x2-x1)/4;
	mx=(x1+x2)/2;
	my=(y1+y2)/2;
	draw(); 
	getch();
	cleardevice();
	rotate();
	getch();
}

void draw()
{
	bar3d(x1,y1,x2,y2,depth,7);
	outtextxy(x1+50,y1-15,"Object");
}

void rotate()
{
	float t;
	int a1,b1,a2,b2,dep;
	printf("Enter the angle to rotate: ");
	scanf("%f", &t);
	t=t*(3.14/180);
	a1=mx+(x1-mx)*cos(t)-(y1-my)*sin(t);
	a2=mx+(x2-mx)*cos(t)-(y2-my)*sin(t);
	b1=my+(x1-mx)*sin(t)-(y1-my)*cos(t);
	b2=my+(x2-mx)*sin(t)-(y2-my)*cos(t);
	if(a2>a1)
		dep=(a2-a1)/4;
	else
		dep=(a1-a2)/4;
	bar3d(a1,b1,a2,b2,dep,7);
	outtextxy(a1+50,b1-15,"Image");
	setcolor(15);
}