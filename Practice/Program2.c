// Write a program to calculate area of a circle.

#include<stdio.h>

void main(){

    int Area , r;

    printf("Enter the Radius of a Circle : ");
    scanf("%d",&r);

    Area = 3.14 *r*r;

    printf("Area = %d ",Area);
}