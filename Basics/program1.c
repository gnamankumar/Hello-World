#include <stdio.h>

int main() {
	int i = 1;
	int z = i + (i = 10);
	printf("%d",z);
    
}

