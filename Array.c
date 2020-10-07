int myArray[5];
int n = 0;

// Initializing elements of array seperately
for(n=0;n<sizeof(myArray)/sizeof(myArray[0]);n++)
{
  myArray[n] = n;
}

int a = myArray[3]; // Assigning 3rd element of array value to integer 'a'.
