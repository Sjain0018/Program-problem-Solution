/*Types of Array in c                   0 1 2 3 4
1. One dimensional array (1 D Array)
2. Multidimensional array (2 D Array, 3 D array)
*/

















/* Wap in c to input and output array using function*/
 #include<stdio.h>
 #include<conio.h>
 #define MAX 10
 void inputarray(int a[],int n);
 void outputarray(int a[],int n);
 void main()
 {
 int n,a[MAX];
 clrscr();
	printf("Enter the size of an array=");
	scanf("%d",&n);
 inputarray(a,n);
 printf("The array is given below:->");
 outputarray(a,n);
getch();
}
void inputarray(int a[],int n)
{
int i;
for(i=0;i<=n-1;i++)
 {
 printf("Enter the no.a[%d]=",i);
 scanf("%d",&a[i]);
 }
}
void outputarray(int a[],int n)
{
int i;
for(i=0;i<=n-1;i++)
{
printf("%d ",a[i]);
}
}

