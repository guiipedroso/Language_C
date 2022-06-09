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
  for(int i = 0; i <= 100; i++)
    {
    if(i == 40)
      {
      break;
      }
    else 
      {
      printf("%2d\n", 2*i);
      }    
    }

    return(0);
  } /* <end main> */
