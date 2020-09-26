#include<stdio.h>

int sum(int);

void main()
{
    int i,x;

    printf("Enter the value of i :");
    scanf("%d",&i);

    x=sum(i);

    printf("SUM of given No =%d",x);
    printf("\n");

}


int sum(int n)
{
    if(n==1)
        return 1;

    else
    {
        return (n + sum(n-1));

    }
    
}
