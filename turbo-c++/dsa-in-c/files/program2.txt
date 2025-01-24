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

