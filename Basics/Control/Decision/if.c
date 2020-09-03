/* Write a program Enter a number positive or negative */

#include<stdio.h>
#include<conio.h>

void main()
{
  int x;
  clrscr();
  printf("Enter a number :");

  scanf("%d",&x);

  if(x>0)
  {
    printf("x is Positive");

  }
  if(x<0)
  {
   printf("x is Negative");
  }

  getch();
}
