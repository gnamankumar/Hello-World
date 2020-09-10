/* Tekes Something6 Return Nothing  */

#include<stdio.h>

void main(){

    int x,y;
    void add(int ,int);
    printf("Enter two number : ");
    scanf("%d%d",&x,&y);
    add(x,y); // Actual Arguments | Call by values


}

void add(int a, int b) // Formal Arguments
{
    int c;
    
    c = a + b;
    printf("Sum of %d\n",c); 

}