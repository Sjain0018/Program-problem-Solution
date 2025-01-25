 #include<stdio.h>
 #include<conio.h>
 #define MAX 10
 void inputarray(int a[],int n);
 void outputarray(int a[],int n);
 int sum(int a[], int n);
 void main()
 {
 int n,a[MAX];
 clrscr();
	printf("Enter the size of an array=");
	scanf("%d",&n);
 inputarray(a,n);
 printf("The array is given below:->");
 outputarray(a,n);
 printf("\nSum of all elemnets of an array = %d",sum(a,n));
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
int sum(int a[],int n)
{
int i,sum=0;
	for(i=0;i<=n-1;i++)
	{
	sum+=a[i];  //sum = sum + a[i];
	}
return(sum);
}

