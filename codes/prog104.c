/*
  Title: Cubo (X_3) 
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Prototypes> */
int cubo(int value);

/* <Main function> */
int
main(void)
  {
  int result;

  /* <Examples> */
  result = cubo(2);
  printf("%d\n", result);
  result = cubo(5);
  printf("%d\n", result);

  getchar();
  return(0);
  } /* <end main> */

int
cubo(int x)
  {
  int res;
  res = x*x*x;
  return(res);
  }
