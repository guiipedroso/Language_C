/*
  Title:
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* Libraries */
#include <stdio.h>

/* main function*/
int
main()
  {
  
  short unsigned ADC_value;
  float volts;

  printf("Enter a value[0-1023]: ");
  scanf("%hu", &ADC_value);
  
  volts = ADC_value * 5.0/1023.0;
  printf("U = %.2fV\n", volts);
  
  getchar();
  return(0);
  } /* end main */
