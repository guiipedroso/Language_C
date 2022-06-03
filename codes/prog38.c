/*
  Title: Volts 
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <main function> */
int
main()
  {
  float volts;

  printf("Enter a value: ");
  scanf("%f", &volts);

  volts = volts < 10 ? printf("Alert, battery is below 10V\n\7") : printf("Battery is good\n"); 
  
  getchar();
  return(0);
  }
