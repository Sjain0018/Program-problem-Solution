/*Program to input and output matrix */
#include<stdio.h>
#include<conio.h>
#define MAX 3
void main()
{
int a[MAX][MAX];
int r,c;
int i,j;
clrscr();
	printf("Enter the size of row and column of matrix=");
	scanf("%d%d",&r,&c);
	for(i=0;i<=r-1;i++)
	{
	for(j=0;j<=c-1;j++)
	{
	printf("Enter the [%d][%d] element=",i,j);
	scanf("%d",&a[i][j]);
	}
	}
	printf("The matrix is given below:->\n");
	for(i=0;i<=r-1;i++)
	{
	for(j=0;j<=c-1;j++)
	{
	printf("%d ",a[i][j]);
	}
	printf("\n");
	}
getch();
}