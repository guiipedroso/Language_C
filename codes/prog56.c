/*
  Title: Break (Loop For) II
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
  for(int i = 1; i <= 10; i++)
    {
      for(int j = 1; j <= 10; j++)
        {
          printf(" %2d", j);
	  if(j == i)
	    {
	      break;
	    }
        }
      putchar('\n');
    }
  return(0);
  } /* <end main> */
