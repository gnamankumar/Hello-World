#include<stdio.h>
#include<conio.h>

void main(){

  int x=5,y=5;

  clrscr();

  x=x*3+4;  //Here * operator priority is high
  y*=3+4;  //Here *= operator priority is low

  printf("%d\n%d",x,y);
  getch();
}

/* Output

19
35
*/