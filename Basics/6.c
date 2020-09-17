#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{    
char *mem_alloc;
/* memory allocated dynamically */mem_alloc = malloc( 15 * sizeof(char) );

if(mem_alloc== NULL )
{      
printf("Couldn't able to allocate requested memory\n");
}
else
{      
strcpy( mem_alloc,"w3schools.in");
}

printf("Dynamically allocated memory content : %s\n", mem_alloc );
free(mem_alloc);
}
