/*Types of Sparse matrix -  // Must square matrix ( r == c )
------------------------------------------------------------------------------
  Diagonal sparse matrix
-> if ( i==j )

------------------------------------------------------------------------------
//Diagonal sparse matrix-
------------------------------------------------------------------------------
*/
#include<stdio.h>
#include<conio.h>
// function declaration
void storesparse(int s[],int r,int c);
void restoresparse(int s[]);
//Main
void main()
{
int s[5];
int r,c;
clrscr();
printf("Enter the row and column of the matrix=");
scanf("%d%d",&r,&c);
if(r==c)
{
storesparse(s,r,c);
restoresparse(s);
}
else
{
printf("\nYour matrix size is not valid!!!!");
}
getch();
}
void storesparse(int s[],int r,int c)
{
int i,k=1;
s[0]=r;
for(i=0;i<r;i++)
{
printf("Enter [%d][%d]th value of sparse matrix=",i,i);
scanf("%d",&s[k]);
k++;
}
}
void restoresparse(int s[])
{
int i,j,k=1,z=0;
for(i=0;i<s[0];i++)
{
for(j=0;j<s[0];j++)
{
if(i==j)
{
printf(" %d",s[k]);
k++;
}
else
{
printf(" %d",z);
}
}
printf("\n");
}
}
