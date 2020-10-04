// Write a program to swap two numbers

#include<stdio.h>

void main(){

    int a , b , temp;

    printf("Enter Two No :");
    scanf("%d %d",&a,&b);

    temp=a;
    a=b;
    b=temp;
    printf("The Value is a=%d and b=%d \n",a,b);
}