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
    if(n==0)
        return 0;

    else
    {
        return (n%10 +fact(n/10));

    }
    
}
