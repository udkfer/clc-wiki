#include <stdio.h>

void print_integer(int);

int main(void)
{
  int number = 19;
  int square;

  while(number >= 0)
  {
    square = number * number;

    print_integer(number);
    putchar(' ');
    print_integer(square);
    putchar('\n');

    number = number - 1;
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
