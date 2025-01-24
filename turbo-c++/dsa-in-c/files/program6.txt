#include<stdio.h>
#include<conio.h>
#define MAX 10
//Function declaration..
void inputarray(int [],int);
void outputarray(int [],int);
int linearsearch(int [],int,int);
void main()
{
int a[MAX],n,item,loc;
clrscr();
	printf("Enter the size of an array=");
	 scanf("%d",&n);
inputarray(a,n);   //Function call
	printf("The array is given below:->\n\n");
outputarray(a,n);
	printf("\nEnter the iem to search=");
	 scanf("%d",&item);
loc=linearsearch(a,n,item); //Function call
	if(loc!=-1 )
	{
	printf("\nItem is found at %d location",loc);
	}
	else
	{
	printf("\nSearch is unsuccesful,Item is not found");
	}
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
//Function definition of linear search
int linearsearch(int a[],int n,int item)
{
int i;
	for(i=0;i<=n-1;i++)
		if(a[i]==item)
		return(i);
return(-1);
}

