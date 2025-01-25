/* Matrix Operatuions-   ( by function )
--------------------------------------------------------------------------------

-> sum of all elements of matrix
-> sum of main diagonal of matrix ( Trace of matrix )
-> sum of all elements of matrix rowwise
-> sum of all elements of matrix columnwise
-> sum of lower triangluar elements of matrix
-> sum of upper triangular elements of matrix
-> Transpose a matrix rowise
-> Transpose a matrix columnwise
-> Addition of two matrix
-> Multiplication of two matrix ( most important )


common - parameters are same :)
------------------------------------------------------------------------------


-> sum of all elements of matrix
   suppose  3 X 3 matrix

	1 2 3
	4 5 6
	7 8 9

	sum = 45

-> sum of main diagonal of matrix ( Trace of matrix )
 suppose  3 X 3 matrix
/*
	1 2 3      1
	4 5 6         5         1 + 5 + 9 = 15
	7 8 9           9


      a[0][0]=1
      a[1][1]=5
      a[2][2]=9

	i == j


-> sum of all elements of matrix rowwise
suppose  3 X 3 matrix

	1 2 3     1 + 2 + 3 = 6
	4 5 6     4 + 5 + 6 = 15
	7 8 9     7 + 8 + 9 = 24

 row ->      a[0][0] + a[0][1] + a[0][2]   =
	     a[1][0] + a[1][1] + a[1][2]   =
	     a[2][0] + a[2][1] + a[2][2]   =


-> sum of all elements of matrix columnwise
suppose  3 X 3 matrix

	1 2 3
	4 5 6
/*	7 8 9

	1	2	3
	+	+ 	+
	4	5	6
	+	+	+
	7	8	9
	=	=	=
	12	15	18

 column ->
	 a[0][0]	a[0][1]		a[0][2]
	    +		   +		   +
	 a[1][0]	a[1][1]         a[1][2]
	    +		   +		   +
	 a[2][0]	a[2][1]	        a[2][2]
	    =		   =    	   =
	      /*
   -> sum of lower triangluar elements of matrix
   suppose  3 X 3 matrix

	1 2 3      1
	4 5 6      4 5
	7 8 9      7 8 9

	sum = 34

	a[0][0]=1
	a[1][0]=4
	a[1][1]=5
	a[2][0]=7
	a[2][1]=8
	a[2][2]=9

	i > = j


-> sum of upper triangular elements of matrix
   suppose  3 X 3 matrix

	1 2 3       1 2 3
	4 5 6         5 6
	7 8 9           9

	sum = 26

	a[0][0]=1
	a[0][1]=4
	a[0][2]=5
	a[1][1]=7
	a[1][2]=8
	a[2][2]=9

	i < = j

 */
/*
------------------------------------------------------------------------------
Program to see basic operations of matrix using function*/
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