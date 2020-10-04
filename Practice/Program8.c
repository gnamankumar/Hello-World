/* Write a program to check whether a given number is divisible by 5 or not */

#include<stdio.h>

void main(){

    int a;

    printf("Enter a No :");
    scanf("%d",&a);

    if(a%5==0){
        printf("No is divisible by 5");
    }
    else{
        printf("No is not divisible by 5");
    }
}