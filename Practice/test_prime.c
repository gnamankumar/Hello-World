#include<stdio.h>
void main(){

    int a,b,x,i;
    printf("Enter NO");
    scanf("%d%d",&a,&b);

    for(x=a+1; x<=b-1;x++)
    {
        for(i=2;i<x;i++)
            if(x%i==0)
            break;

        if(i==x)
            printf("%d \t ",x);
    }
}