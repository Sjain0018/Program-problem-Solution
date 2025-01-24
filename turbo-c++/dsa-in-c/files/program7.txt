#include<stdio.h>
#include<conio.h>
#define MAX 10
//Function declaration..
void inputarray(int [],int);
void outputarray(int [],int);
int binarysearch(int [],int,int,int);
void main()
{
int a[MAX],n,item,loc;
clrscr();
	printf("Enter the size of  an array=");
	 scanf("%d",&n);
inputarray(a,n);   //Function call
	printf("The array is given below:->\n\n");
outputarray(a,n);  //Function call
	printf("\nEnter the item to search=");
	 scanf("%d",&item);
loc=binarysearch(a,0,n-1,item); //Function call
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
//Function definition of binary search
int binarysearch(int a[],int lb,int ub,int item)
{
int mid;
	while(lb<=ub)
	{
	mid=(lb+ub)/2;
		if(a[mid]==item)
		return(mid);
		else
		if(item<a[mid])
		ub=mid-1;
		else
		lb=mid+1;
	}
return(-1);
}