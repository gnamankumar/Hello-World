#include<stdio.h>
int add(int *a,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+*(a+i);
	}
	return sum;
}
int main()
{
	int a[50],n,i,sum=0;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the value in a array\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum=add(&a[0],n);
	printf("sum of element : %d",sum);
	return 0;
}
