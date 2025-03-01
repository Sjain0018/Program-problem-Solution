#include<stdio.h>
#include<conio.h>
#define MAX 3
/* Function declaration */
void inputmatrix(int [][MAX],int,int);
void outputmatrix(int [][MAX],int,int);
void add(int a[][MAX],int r1,int c1,int b[][MAX],int r2,int c2);
void main()
{
int a[MAX][MAX],b[MAX][MAX];
int r1,c1,r2,c2;
clrscr();
	printf("Enter the size of row and column of Ist matrix=");
	scanf("%d%d",&r1,&c1);
	printf("Enter the row and column of IInd matrix=");
	scanf("%d%d",&r2,&c2);
	printf("Ist Matrix\n");
inputmatrix(a,r1,c1);
outputmatrix(a,r1,c1);
	printf("\nIInd Matrix\n");
inputmatrix(b,r2,c2);
outputmatrix(b,r2,c2);
	printf("\nAddtion :->\n");
add(a,r1,c1,b,r2,c2);
getch();
}
void inputmatrix(int a[][MAX],int r,int c)
{
int i,j;
	for(i=0;i<=r-1;i++)
	{
	for(j=0;j<=c-1;j++)
	{
	printf("Enter the [%d][%d] element=",i,j);
	scanf("%d",&a[i][j]);
	}
	}
}
void outputmatrix(int a[][MAX],int r,int c)
{
int i,j;
	printf("\nThe matrix is given below:->\n");
	for(i=0;i<=r-1;i++)
	{
	for(j=0;j<=c-1;j++)
	{
	printf("%d ",a[i][j]);
	}
	printf("\n");
	}
}
void add(int a[][MAX],int r1,int c1,int b[][MAX],int r2,int c2)
{
int i,j;

if((r1==r2)&&(c1==c2))
{
	for(i=0;i<=r1-1;i++)
	{
	 for(j=0;j<=c1-1;j++)
	 {
	  printf("%d ",a[i][j]+b[i][j]);
	 }
	printf("\n");
	}
}
else
{
	printf("\nMatrices size is not valid for addition");
}
}