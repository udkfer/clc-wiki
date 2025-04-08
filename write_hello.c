/* write_hello.c */

#include <stdio.h> /* pull in the prototype for putchar */

int main(void) /* main is a function that takes no parameters, and returns int */
{
  putchar('H');
  putchar('e');
  putchar('l');
  putchar('l');
  putchar('o');
  putchar('\n'); /* terminate the line with a newline character */

  return 0; /* terminate the program */
}

