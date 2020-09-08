#include<stdio.h>
#include<stdlib.h>

void main(){

    int choice,a,b,c;
    while(1)
    {

    printf("\n\n1. Addition");
    printf("\n2. Odd-Even");
    printf("\n3. Printing N numbers");
    printf("\n4. Exit");

    printf("\nEnter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter two numbers");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("\n%d",c); 
        break;

    case 2:
        printf("Enter a number");
        scanf("%d",&a);
        if(a%2==0)
            printf("Even Number");
        
        else
            printf("Odd Number");
        
            break;

    case 3:
        printf("Enter a Number");
        scanf("%d",&a);
        for(b=1;b<=a;b++)
            printf("%d\t",b);
    
    case 4: exit(0);
    default:
        printf("Invalid Number");

        
    }

    }
}
