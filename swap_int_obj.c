// Write a function to swap the values of two integer objects. You will need to pass their addresses to the function from main. Convince yourself that your program works (you may find the print_integer function we wrote earlier to be useful here). 

#include <stdio.h>

void print_integer(int);

int main(void)
{
  int prime[2] =
  {2, 3};

  int index = 0;
  int invert;

  while(index < 20)
  {
    invert = prime[index] * prime[index];

    print_integer(prime[index]);
    putchar(' ');
    print_integer(invert);
    putchar('\n');

    index = index + 1;
  }
  return 0;
}

void print_integer(int n)
{
  if(n > 9)
  {
    print_integer(n / 10);
    n = n % 10;
  }
  putchar(n + '0');
}

