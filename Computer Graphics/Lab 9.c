/*Program for 4-connected flood fill*/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void flood(int,int,int,int);

void main()
{ 
	int gd,gm=DETECT;
	clrscr();
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	rectangle(100,100,150,150);
	flood(110,110,7,0);
	getch(); 
}
void flood(int x,int y, int fill_col, int old_col)
{ 
	if(getpixel(x,y)==old_col)
	{ 
		delay(1);
		putpixel(x,y,fill_col);
		flood(x+1,y,fill_col,old_col);
		flood(x-1,y,fill_col,old_col);
		flood(x,y+1,fill_col,old_col);
		flood(x,y-1,fill_col,old_col);
	}
}
