#include<stdio.h>

int fact(int);

void main()
{
    int i,x;

    printf("Enter the value of i :");
    scanf("%d",&i);

    x=fact(i);

    printf("Factorial of given No =%d",x);
    printf("\n");

}


int fact(int n)
{
    if(n==1)
        return 1;

    else
    {
        return (n*fact(n-1));

    }
    
}
