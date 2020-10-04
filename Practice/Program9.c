/* Write a program to to find greater between two numbers */

#include<stdio.h>

void main(){

    int a,b;
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);

    if(a>b)
        printf("A is greater ");
    else
        printf("B is greater ");
}