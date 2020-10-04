// Write a program to find roots of a quadratic equation

#include<stdio.h>
#include<math.h>

void main(){

    int a,b,c ,D;
    float x,y;
    
    printf("Enter the coefficient of a equation : ");
    scanf("%d%d%d",&a,&b,&c);

    D = b*b-4*a*c;

    if(D<0){
        printf("Both Roots are imaginary");
    }
    else if(D==0){
        printf("Equal Root : \t");
        x=-b/(2.0*a);
        printf("%f",x);
    }
    else{
        printf("Two Roots \n");
    
        x=(-b+sqrt(D))/(2*a);
        y=(-b-sqrt(D))/(2*a);


        printf("%f %f",x,y);

    }


}