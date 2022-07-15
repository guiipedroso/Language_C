/*
  Title: Sum (Macro)   
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Macros> */
#define sum(a,b) a+b 
#define div(c,d) c/d

/* <Main function> */
int
main()
  {
  int result; /* or float */
  float res1;
  result = sum(192, 8);
  printf("%d\n", result);
 
  /* Another example */

  res1 = div((2.45*141),7);
  printf("%f\n", res1);

  getchar();
  return(0);
  } /* <end main> */
