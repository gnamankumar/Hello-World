/*Write a program to to find greater among three numbers*/
#include<stdio.h>

void main(){

    int a,b,c;

    printf("Enter Three No : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)

        printf("A is Greater %d",a);
    else if ( b>c)
        printf("B is greater %d",b);

    else 
  
        printf("C is Greater %d",c);

    printf("\n");
}