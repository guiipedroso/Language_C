/*
  Title: Integer part and fractional part
  Author: Guilherme Pedroso
  Date: May 2022
  Updated: --

*/

/* Libraries */
#include <stdio.h>

/* main function */
int 
main()
  {
  float num;	  
  printf("Enter the real number: ");
  scanf("%f", &num);
  printf("Integer part: %d\n", (int) num);
  printf("Fractional part: %.4f\n", num - ((int) num)); 
  
  return(0);
  } /* end main */
