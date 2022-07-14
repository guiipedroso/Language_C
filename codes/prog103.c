/*
  Title: Compare  
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Prototypes> */
int is_special(int value);

/* <Main function> */
int
main(void)
  {
  int result;

  /* <Examples> */
  result = is_special(2);
  printf("%d\n", result);
  result = is_special(5);
  printf("%d\n", result);

  getchar();
  return(0);
  } /* <end main> */

int
is_special(int x)
  {
  if((x*2) == (x*x))
    {
    return(1);
    }  
  else
    {
    return(0);
    }
  }
