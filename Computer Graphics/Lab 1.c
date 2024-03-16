//First program to draw a line by using build in function line().

#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h> 
void main()
{
	int gd=DETECT,gm; 
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI"); 
	line(100,100,200,200);
	getch();
}