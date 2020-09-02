#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,d,e;
  clrscr();
  a=23&56;  //AND Operator

  b=23|56;   //OR Operator

  c=23^56;  //XOR Operator

  d=56>>2;  //Right Shift

  e=56<<3; //Left Shift

  printf("%d\n%d\n%d\n%d\n%d",a,b,c,d,e);

  getch();
}