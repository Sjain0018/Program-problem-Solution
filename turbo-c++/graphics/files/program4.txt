#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
setbkcolor(WHITE);
setcolor(BLUE);
rectangle(100,100,500,400);
getch();
closegraph();
}