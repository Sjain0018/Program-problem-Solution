/*Program to transposition matrix using function*/
#include<stdio.h>
#include<conio.h>
#define MAX 3
/* Function declaration */
void inputmatrix(int [][MAX],int,int);
void outputmatrix(int [][MAX],int,int);
void transpose(int a[][MAX],int r,int c);
void main()
{
int a[MAX][MAX];
int r,c;
clrscr();
	printf("Enter the size of row and column of matrix=");
	scanf("%d%d",&r,&c);
inputmatrix(a,r,c);
outputmatrix(a,r,c);
	printf("\nTransposition of matrix=");
transpose(a,r,c);
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
void transpose(int a[][MAX],int r,int c)
{
int t,temp,i,j;
if(r<c)
 t=c;
else
 t=r;
	for(i=0;i<=t-1;i++)
	{
	 for(j=0;j<=i;j++)
	 {
	 temp=a[i][j];
	 a[i][j]=a[j][i];
	 a[j][i]=temp;
	 }
	}
 outputmatrix(a,c,r);
 }