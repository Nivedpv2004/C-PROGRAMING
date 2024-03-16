/*Program to implement the 8-connected Boundary fill algorithm.*/

#include<stdio.h> 
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void boundary_fill(int x, int y, int fcolor, int bcolor)
{
	if ((getpixel(x, y) != bcolor) && (getpixel(x, y) != fcolor))
	{ 
		delay(2);
		putpixel(x, y, fcolor);
		boundary_fill(x + 1, y, fcolor, bcolor);
		boundary_fill(x , y+1, fcolor, bcolor);
		boundary_fill(x+1, y + 1, fcolor, bcolor);
		boundary_fill(x-1, y - 1, fcolor, bcolor);
		boundary_fill(x-1, y, fcolor, bcolor);
		boundary_fill(x , y-1, fcolor, bcolor);
		boundary_fill(x-1, y + 1, fcolor, bcolor);
		boundary_fill(x+1, y - 1, fcolor, bcolor);
	}
}

void main()
{ 
	int x, y, fcolor, bcolor;
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	printf("\nEnter the seed point(x,y) to fill rectangle(200,200,250,250) : ");
	scanf("%d%d", &x, &y);
	printf("Enter boundary color: ");
	scanf("%d", &bcolor);
	printf("Enter new color: ");
	scanf("%d", &fcolor);
	rectangle(200,200,250,250);
	boundary_fill(x, y, fcolor, bcolor);
	getch(); 
}