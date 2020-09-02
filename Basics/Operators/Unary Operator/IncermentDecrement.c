#include<stdio.h>
#include<conio.h>

void main()
{
 int a=3;
 clrscr();
 a++;    // Post Increment

 printf("Post Increment %d",a);

 ++a;    //Pre Incerement

 printf("\nPre Increment %d",a);

 a--;   // Post Decrement

 printf("\nPost Decrement %d",a);

 --a; // Pre Decrement

 printf("\nPre Decrement %d",a);
 getch();

}
