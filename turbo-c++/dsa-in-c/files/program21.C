//Creation of sparse matrix-
//store and restore sparse in sparse array-
#include<stdio.h>
#include<conio.h>
// Structure of sparse array
typedef struct sparse
{
int row;
int col;
int ele;
}sparse;
// function declaration
void storesparse(sparse s[],int r,int c);
void restoresparse(sparse s[]);
//Main
void main()
{
sparse s[5];
int r,c;
clrscr();
printf("Enter the row and column of the matrix=");
scanf("%d%d",&r,&c);
storesparse(s,r,c);
restoresparse(s);
getch();
}
void storesparse(sparse s[],int r,int c)
{
int i,j,ele,k=1;
s[0].row=r;
s[0].col=c;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Enter [%d][%d]th value of sparse matrix=",i,j);
scanf("%d",&ele);
if(ele!=0)
{
s[k].row=i;
s[k].col=j;
s[k].ele=ele;
k++;
}
}
s[0].ele=k-1;
}
}
void restoresparse(sparse s[])
{
int i,j,k=1,z=0;
for(i=0;i<s[0].row;i++)
{
for(j=0;j<s[0].col;j++)
{
if((i==s[k].row)&&(j==s[k].col))
{
printf(" %d",s[k].ele);
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
