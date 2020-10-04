// Write a program to check whether a number is even or odd without using modulus(%) operator

#include<stdio.h>

void main(){

    int a ;

    printf("Enter No : ");
    scanf("%d",&a);

    if(a&1){ // Here we using the Binary no to using a check odd and even
        printf("Odd Number");
    }
    else
    {
        printf("Even Number");
    }
    
    printf("\n");
}