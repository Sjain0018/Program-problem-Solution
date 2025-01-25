// Program to intialize and declare 2 D dimensional array ( matrix 3 X 3) */
#include<stdio.h>
#include<conio.h>
#define MAX 3
void main()
{
int a[MAX][MAX]={ {1,2,3},{4,5,6},{7,8,9}};
int i,j;
clrscr();
	printf("The matrix is given below:->\n");
	for(i=0;i<=3-1;i++)
	{
		for(j=0;j<=3-1;j++)
		{
		printf(" a[%d][%d] = %d\n",i,j,a[i][j]);
		}
	}
getch();
}