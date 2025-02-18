#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:/TURBOC3/BGI");
putpixel(100,100,WHITE);
getch();
closegraph();
}
