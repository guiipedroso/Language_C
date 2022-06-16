/*
  Title: Nested While 
  Author: Guilherme Pedroso de Lima
  Date: June 2022
  Updated: --

*/

/* Libraries */
#include <stdio.h>

/* Main function */
int
main(void)
  {
  int i = 1, mul = 1;

  while(mul <= 10)
    {
    i = 1;	    
    while(i <= 10)
      {
      printf("%2d X %2d = %2d\n", mul, i, mul*i);
      i++;
      }   
    putchar('\n');
    mul++;  
    }

  getchar();
  return(0);
  } /* end main */
