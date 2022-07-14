/*
  Title: Square  
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Prototypes> */
int is_minus(int value);

/* <Main function> */
int
main()
  {
  int result;

  result = is_minus(89);
  printf("%d\n", result);
  result = is_minus(195);
  printf("%d\n", result);

  getchar();
  return(0);
  } /* <end main> */

int
is_minus(int value)
  {
  if(value > 0)
    {
    value *= -1;
    return(value);
    }
  else 
    {
    return(value);
    }
  }
