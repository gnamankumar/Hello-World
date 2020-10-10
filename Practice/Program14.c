// Write a program to print first N natural numbers. (N is given by user)

#include<stdio.h>

void main(){

    int n,i;

    printf("Enter the NO.");
    scanf("%d",&n);

    for(i=1;i<=n;i++)

        printf("%d\n",i);
}