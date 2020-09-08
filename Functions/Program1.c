/* Tekes Nothing Return Nothing  */

#include<stdio.h>

void main()
{
    void add(void); //Function Decleration (Prototype)
    add();  // Function Call
}

void add() // This is nothing taken
{
    int a,b,c;
    printf("Enter the Number : ");

    scanf("%d %d",&a,&b);
    c = a + b;
    printf("Sum of %d\n",c); 

}
