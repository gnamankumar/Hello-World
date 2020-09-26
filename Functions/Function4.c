/* Tekes Something Return Something  */

#include<stdio.h>
int add(int , int); // Globally Declear

void main(){

    int s ,x,y;
    
    printf("Enter the value");
    scanf("%d %d",&x,&y);

    s=add(x,y);
    printf("Sum is %d",s);
}

int add(int a, int b)
{
    int c;
   
    c=a+b;

    return(c);
}
