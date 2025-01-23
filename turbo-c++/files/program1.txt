/* Wap in c to input and output array*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5];
clrscr();
	for(int i=0;i<=5-1;i++)
	{
	 printf("Enter a[%d] value = ",i);
	 scanf("%d",&a[i]);
	 }
	printf("The array is given below ->\n");
	for(i=0;i<=5-1;i++)
	{
	printf("%d ",a[i]);
	}
getch();
}