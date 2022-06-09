/*
  Title: Break (Loop For)
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Main function> */
int
main()
  {
  for(int i = 0; i <= 10; i++)
    {
      for(int j = 0; j <= i; j++)
        {
        printf(" %2d", j);
        }    
      putchar('\n');
    } 

    return(0);
  } /* <end main> */
