// Write a program to swap two numbers without using third variable

#include<stdio.h>

void main(){

    int a , b , temp;

    printf("Enter Two No :");
    scanf("%d %d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("The Value is a=%d and b=%d \n",a,b);
}