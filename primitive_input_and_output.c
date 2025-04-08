/* primitive_input_and_output.c */

#include <stdio.h>          /* prototypes for getchar and putchar */

int main(void)              /* Introduces main */
{                           /* Beginning of main's function body */

  int mycharacter;          /* mycharacter is defined, but given no initial value */

  mycharacter = getchar();  /* retrieve a character from the standard input device */

  putchar(mycharacter);     /* display the character we retrieved */

  putchar('\n');            /* remember, the standard output device needs a newline
                               character to be written before anything is displayed.
                               */

  return 0;                 /* terminate the function (and the program), returning
                               the value 0 to the caller
                               */
}                           /* closing brace terminates the main function body */
