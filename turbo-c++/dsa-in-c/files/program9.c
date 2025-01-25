/*Program to perform insertion operation in an array by searching using
function*/
#include<stdio.h>
#include<conio.h>
#define MAX 6
//Function declaration..
void inputarray(int [],int);
void outputarray(int [],int);
int linearsearch(int a[],int n,int ele);
int insert(int a[],int n,int item,int loc);
void main()
{
int a[MAX],n,item,loc,ele,ch;
clrscr();
	printf("Enter the size of an array=");
	 scanf("%d",&n);
inputarray(a,n);   //Function call
	printf("The array is given below:->\n\n");
outputarray(a,n);
	printf("\nEnter the item which you want to insert=");
	 scanf("%d",&item);
	printf("\nEnter the array element B/A you want to insert=");
	 scanf("%d",&ele);
loc=linearsearch(a,n,ele);
	printf("\nIf you want to insert before then press 1 otherwise 2=");
	 scanf("%d",&ch);
switch(ch)
{
case 1:
	n=insert(a,n,item,loc); //Function call
	break;
case 2:
	loc=loc+1;
	n=insert(a,n,item,loc); //Function call
	break;
default:
	printf("\nWrong choice!!");
}
	printf("\nAfter insertion array is:->");
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
//Function definition of insert an item by Searching
int insert(int a[],int n,int item,int loc)
{
int i;
/*Logic for insertion item in an array*/
	if(n==MAX)
	{
	printf("\nOverflow,Array is full!!! Can't insert new element");
	getch();
	exit(0);
	}
	else
	{
	for(i=n-1;i>=loc;i--)
	 a[i+1]=a[i];
a[loc]=item;
n=n+1;
return(n);
}
}
int linearsearch(int a[],int n,int ele)
{
int i;
	for(i=0;i<=n-1;i++)
		if(a[i]==ele)
		return(i);
return(-1);
}
