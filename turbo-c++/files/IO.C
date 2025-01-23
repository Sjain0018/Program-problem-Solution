/* Wap in c to input and output array*/
#include<stdio.h>
int main()
{
int a[5];
	for(int i=0;i<=5-1;i++)
	{
	 printf("Enter a[%d] value = ",i);
	 scanf("%d",&a[i]);
	 }
	printf("The array is given below ->\n");
	for(int i=0;i<=5-1;i++)
	{
	printf("%d ",a[i]);
	}
return 0;
}