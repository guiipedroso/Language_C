/*
  Title: Condition '?'
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --
*/

/* <Libraries> */
#include <stdio.h>

/*
  ==> need 3 arguments

  condition ? result_True : result_False
*/


/* <Main function> */
int
main()
  {
  int num1 = 5, num2;

  num2 = num1 >  10 ? 20 : 15;

  printf("Value: %d\n", num2); 

  getchar();
  return(0);
  }
