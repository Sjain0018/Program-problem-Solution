#include<stdio.h>
#include<conio.h>
void main()
{
//Array intialization with declaration
int arr[5]={1,2,3,4,5};
//Array intialization with declartion without size
int arr1[]={1,2,3,4,5};
//Array intialization after declaration (using loop)
int arr2[5];
int i;
clrscr();
	for(i=0;i<=5-1;i++)
	{
	scanf("%d",&arr[i]);
	}
getch();
}
