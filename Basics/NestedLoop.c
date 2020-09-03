#include<stdio.h>
#include<conio.h>

void main()
{
  int x,y,z;
  clrscr();
  printf("Enter the number");
  scanf("%d%d%d",&x,&y,&z);
  if(x>y)
  {
    if(x>z)
    {
      printf("x is greater %d",x);
    }
    else
    {
      printf("z is greater %d",z);
    }
  }

  else
  {
    if(y>z)
    {
     printf("y is greater %d",y);
    }
    else
    {
     printf("z is greater %d",z);
    }

  }
  getch();
}
