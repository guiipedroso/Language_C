/*
  Title: Basic Arithmetic Operations
  Author: Guilherme Pedroso
  Date: August 2022
  Updated: -- 
*/

/* <Libraries> */
#include <stdio.h>

/* <Prototypes> */

float sum(float x, float y);
float sub(float x, float y);


/* <Main function> */
int 
main()
  {
  float show;
  show = sum(13.16, 15.39);
  printf("Sum = %.3f\n", show);
  show = sub(15.5,2.2);
  printf("Subtraction = %.3f\n", show);

  /* Others values */
  show = sum(15.1267, 3.1900);
  printf("Sum = %.4f\n", show);
  show = sub(4.5,2);
  printf("Subtraction = %.1f\n", show);

  return(0);
  }

float sum(float x, float y)
  {
  return(x+y);
  }

float sub(float x, float y)
  {
  return(x-y);
  }

