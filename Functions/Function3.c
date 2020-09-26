/* Tekes Nothing Return Something  */

#include<stdio.h>
int add(void); // Globally Declear

void main(){

    int s;
    s=add();

    printf("Sum is %d",s);
}

int add()
{
    int a,b,c;
    printf("Enter the value");
    scanf("%d %d",&a,&b);

    c=a+b;

    return(c);
}