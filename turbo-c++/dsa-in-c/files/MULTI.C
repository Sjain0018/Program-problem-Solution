/* Matrix Operatuions-   ( by function )
--------------------------------------------------------------------------------


-> Transposition of matrix
-> Addition of two matrix
-> Multiplication of two matrix ( most important )


common - parameters are same :)
------------------------------------------------------------------------------
-> Multiplication of two matrix
/*
------------------------------------------------------------------------------
*/
#include<stdio.h>
#include<conio.h>
#define MAX 3
/* Function declaration */
void inputmatrix(int [][MAX],int,int);
void outputmatrix(int [][MAX],int,int);
void multiplication(int a[][MAX],int r,int b[][MAX],int c);
void main()
{
int a[MAX][MAX],b[MAX][MAX];
int r,c;
clrscr();
	printf("Enter the size of row and column of Ist matrix=");
	scanf("%d%d",&r,&c);
inputmatrix(a,r,c);
outputmatrix(a,r,c);
	printf("\nIInd Matrix\n");
inputmatrix(b,r,c);
outputmatrix(b,r,c);
	printf("\nMultiplication :->\n");
multiplication(a,r,b,c);
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
void multiplication(int a[][MAX],int r,int b[][MAX],int c)
{
int i,j,k;
int mul[MAX][MAX];
	if(r==c)
	{
	 for(i=0;i<=r-1;i++)
	 {
	  for(j=0;j<=c-1;j++)
	  {
	   mul[i][j]=0;
	   for(k=0;k<=c-1;k++)
	   {
	   mul[i][j]+=a[i][k]*b[k][j];
	   }
	   printf("%d ",mul[i][j]);
	  }
	  printf("\n");
	 }
	}
	else
	{
	printf("\nYour matrices' size is not valid for multiplications");
	}
}