/* Write a program Enter a number positive or negative */

#include<stdio.h>
#include<conio.h>

void main()
{
  int x;
  clrscr();
  printf("Enter a number :");

  scanf("%d",&x);

  x>0 ? printf("x is Positive"): printf("x is Negative");
  getch();
}
