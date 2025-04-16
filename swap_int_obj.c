// Write a function to swap the values of two integer objects. You will need to pass their addresses to the function from main. Convince yourself that your program works (you may find the print_integer function we wrote earlier to be useful here). 

#include <stdio.h>

void print_integer(int);

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main(void) {

  int a = 1;
  int b = 2;


  puts("Before:");
  print_integer(a);
  putchar(' ');
  print_integer(b);
  putchar('\n');

  swap(&a, &b);
  puts("After:");
  print_integer(a);
  putchar(' ');
  print_integer(b);
  putchar('\n');

}

void print_integer(int n) {
  if(n > 9)
  {
    print_integer(n / 10);
    n = n % 10;
  }
  putchar(n + '0');
}
