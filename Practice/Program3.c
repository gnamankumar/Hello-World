// Write a program which takes input as integers only that is restrict other characters from input

#include<stdio.h>
#include<conio.h>

int getIntegerOnly()
{
    int num = 0,ch;
    do
    {
        ch=getch();
        if(ch>=48 && ch<=57)
        {
            printf("%c",ch);
            num=num * 10 + (ch-48);
        }
        if(ch == 13) 
          break;
    } while (1);
    return(num);
    
}

void main(){

    int x=0;
    x = getIntegerOnly();
    printf("\nYou have Entered %d",x);

}

