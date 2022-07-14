/*
  Title: Square  
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Prototypes> */
int is_square(int x, int y);

/* <Main function> */
int
main(void)
  {
  int result;

  /* <Examples> */
  result = is_square(3,5);
  printf("%d\n", result);
  result = is_square(4,2);
  printf("%d\n", result);

  getchar();
  return(0);
  } /* <end main> */

int
is_square(int x, int y)
  {
  if(x == (y*y))
    {
    return(1);
    }  
  else
    {
    return(0);
    }
  }
