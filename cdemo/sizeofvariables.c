
#include<stdio.h>

int main()
{
  int a = 545;
  char x = 'x';
  float f = 12.345;
  double d = 123.456;
  
  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  
  // print value and size of char variable
  printf("char x value: %c and size: %d bytes\n", x, sizeof(x));
  
  // print value and size of float variable
  printf("char f value: %f and size: %d bytes\n", f, sizeof(f));
  
  // print value and size of double prec float variable
  printf("char d value: %d and size: %d bytes\n", d, sizeof(d));
}


