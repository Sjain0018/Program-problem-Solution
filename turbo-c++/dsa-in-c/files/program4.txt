 #include<stdio.h>
 #include<conio.h>
 #define MAX 10
 void inputarray(int[],int);
 void outputarray(int[],int);
 int large(int[],int);
 void main()
 {
 int n,a[MAX];
 clrscr();
	printf("Enter the size of an array=");
	scanf("%d",&n);
 inputarray(a,n);
 printf("The array is given below:->");
 outputarray(a,n);
 printf("\nLargest no. in an array= %d",large(a,n));
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
int large(int a[],int n)
{
int max,i;
max=a[0];
for(i=0;i<=n-1;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
return(max);
}
