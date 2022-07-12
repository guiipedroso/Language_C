/*
  Title: Nested Function  
  Author: Guilherme Pedroso 
  Date: July 2022 
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Prototype> */
int sum(int a, int b);

/* <Main function> */
int
main()
  {
  int result;

  result = sum(6,4) + sum (7,8);
  printf("%d\n", result);

  result = sum(8,4) - sum(13,2);
  printf("%d\n", result);

  getchar();
  return(0);
  } /* <end main> */

int
sum(int a, int b)
  {
  return a + b;
  }
