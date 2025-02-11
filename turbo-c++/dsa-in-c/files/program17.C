/*Program to see basic operations of matrix using function*/
#include<stdio.h>
#include<conio.h>
#define MAX 3
/* Function declaration */
void inputmatrix(int [][MAX],int,int);
void outputmatrix(int [][MAX],int,int);
void sumall(int a[][MAX],int r,int c);
void sumdiagonal(int a[][MAX],int r,int c);
void sumrow(int a[][MAX],int r,int c);
void sumcolumn(int a[][MAX],int r,int c);
void sumlowertri(int a[][MAX],int r,int c);
void sumuppertri(int a[][MAX],int r,int c);
void main()
{
int a[MAX][MAX];
int r,c;
int ch;
clrscr();
	printf("Enter the size of row and column of matrix=");
	scanf("%d%d",&r,&c);
inputmatrix(a,r,c);
outputmatrix(a,r,c);
	printf("\n1. Sum of all elements of matrix");
	printf("\n2. Sum of main diagonal of matrix");
	printf("\n3. Sum of all elements of matrix rowwise");
	printf("\n4. Sum of all elements of matrix columnwise");
	printf("\n5. Sum of lower triangular of matrix");
	printf("\n6. Sum of upper triangular of matrix");
	printf("\n\nEnter your choice which operation do you want to perform=");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	       sumall(a,r,c);
	       break;
	case 2:
		sumdiagonal(a,r,c);
		break;
	case 3:
		sumrow(a,r,c);
		break;
	case 4:
	       sumcolumn(a,r,c);
	       break;
	case 5:
	       sumlowertri(a,r,c);
	       break;
	case 6:
	       sumuppertri(a,r,c);
	       break;
	default:
		printf("\nWrong choice");
	}
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
	printf("The matrix is given below:->\n");
	for(i=0;i<=r-1;i++)
	{
	for(j=0;j<=c-1;j++)
	{
	printf("%d ",a[i][j]);
	}
	printf("\n");
	}
}
void sumall(int a[][MAX],int r,int c)
{
int i,j,sum=0;
	for(i=0;i<=r-1;i++)
	{
	 for(j=0;j<=c-1;j++)
	 {
	 sum=sum+a[i][j];
	 }
	}
printf("\nThe sum of all elements of matrix = %d ",sum);
}
void sumdiagonal(int a[][MAX],int r,int c)
{
int i,j,sum=0;
	for(i=0;i<=r-1;i++)
	{
	 for(j=0;j<=c-1;j++)
	 {
	  if(i==j)
	  {
	  sum=sum+a[i][j];
	  }
	  }
	}
printf("\nThe sum of all elements of main diagonal of matrix = %d ",sum);
}
void sumrow(int a[][MAX],int r,int c)
{
int i,j,sum;
	for(i=0;i<=r-1;i++)
	{
	sum=0;
	 for(j=0;j<=c-1;j++)
	 {
	 sum=sum+a[i][j];
	 }
	 printf("\nThe sum of all elements of %dth row =%d",i,sum);
	}
}
void sumcolumn(int a[][MAX],int r,int c)
{
int i,j,sum;
	for(i=0;i<=r-1;i++)
	{
	sum=0;
	 for(j=0;j<=c-1;j++)
	 {
	 sum=sum+a[j][i];
	 }
	 printf("\nThe sum of all elements of %dth column=%d",j,sum);
	}
}
void sumlowertri(int a[][MAX],int r,int c)
{
int i,j,sum=0;
	for(i=0;i<=r-1;i++)
	{
	 for(j=0;j<=c-1;j++)
	 {
	 if(i>=j)
	 {
	  sum=sum+a[i][j];
	 }
	 }
	}
printf("\nThe sum of lower triangular matrix = %d ",sum);
}
void sumuppertri(int a[][MAX],int r,int c)
{
int i,j,sum=0;
	for(i=0;i<=r-1;i++)
	{
	 for(j=0;j<=c-1;j++)
	 {
	 if(i<=j)
	 {
	 sum=sum+a[i][j];
	 }
	 }
	}
printf("\nThe sum of upper triangular matrix = %d ",sum);
}