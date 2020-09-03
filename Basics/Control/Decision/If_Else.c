/* Write a program Enter a number positive or negative */

#include<stdio.h>
#include<conio.h>

void main()
{
  int x;
  clrscr();
  printf("Enter a number :");

  scanf("%d",&x);

  if(x>0)      //If use only condition ststement
  {
    printf("x is Positive");

  }
  else  // else can not use any type of condition
  {
   printf("x is Negative");
  }

  getch();
}
