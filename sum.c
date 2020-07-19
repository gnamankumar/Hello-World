#include <stdio.h>
void main()
{
void fib(int,int,int)
int n1,n2,n3;
printf("enter the starting digit");
scanf("%d%d"&n1,&n2);
print("enter the length");
scanf("%d"&n3);
fib(n1,n2,n3);
}
void fib(int n1,intn2,intn3)
{
inti,sum;
printf("%d%d",n1,n2);
for(i=0;i<n3;i++)
{
sum=n1+n2;
printf("%d",sum);
n1=n2;
n2=sum;
}
}
