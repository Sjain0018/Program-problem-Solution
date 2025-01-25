/*Program to perform deletion operation in an array by searching using function*/
#include<stdio.h>
#include<conio.h>
#define MAX 6
//Function declaration..
void inputarray(int [],int);
void outputarray(int [],int);
int linearsearch(int a[],int n,int ele);
int dele(int a[],int n,int loc);
void main()
{
int a[MAX],n,loc,ele;
clrscr();
	printf("Enter the size of an array=");
	 scanf("%d",&n);
inputarray(a,n);   //Function call
	printf("The array is given below:->\n\n");
outputarray(a,n);
	printf("\nEnter the element w/c you want to delete=");
	 scanf("%d",&ele);
loc=linearsearch(a,n,ele);
n=dele(a,n,loc); //Function call
	printf("\nAfter deletion array is:->");
outputarray(a,n);
getch();
}
//Function defintion of an input array
void inputarray(int a[],int n)
{
//Logic for input data from ana array
int i;
	for(i=0;i<=n-1;i++)
	{
	printf("Input a[%d] value=",i);
	scanf("%d",&a[i]);
	}
}
//Function defintion of an output array
void outputarray(int a[],int n)
{
//Logic for ouput data from an array
int i;
	for(i=0;i<=n-1;i++)
	printf("\n%d",a[i]);
}
//Function defintion for search loc
int linearsearch(int a[],int n,int ele)
{
int i;
	for(i=0;i<=n-1;i++)
		if(a[i]==ele)
		return(i);
return(-1);
}
//Function definition of delete element's loc
int dele(int a[],int n,int loc)
{
int i;
/*Logic for delete loc in an array*/
	if(n==0)
	{
	printf("\nUnderflow,Array is Empty!!! Can't Cant't delete element");
	getch();
	exit(0);
	}
	else
	{
	for(i=loc;i<=n-1;i++)
	 a[i]=a[i+1];
	n=n-1;
	return(n);
	}
}
