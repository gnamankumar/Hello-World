#include<stdio.h>
void main()
{

    int a[10],i, sum=0;
    float avg;

    printf("Enter 10 values : ");

    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    for(i=0;i<=9;i++)
    sum=sum+a[i];

    avg=sum/10.0;

    printf("Aerage= %f",avg);
    printf("\n");
}

#OUTPUT
Enter 10 values : 11
22
33
44
55
66
77
88
99
101
Aerage= 59.599998
