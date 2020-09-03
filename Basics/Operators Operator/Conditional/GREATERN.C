#include<stdio.h>
#include<conio.h>

void main()
{

  int a,b;
  clrscr();
  printf("Enter two numbers : ");

  scanf("%d\n%d",&a,&b);
  printf("Greater no is %d",a>b?a:b);

  getch();


}