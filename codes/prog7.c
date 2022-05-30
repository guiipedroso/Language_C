/*
  Title: Ohm's Law
  Author: Guilherme Pedroso
  Date: May 2022
  Updated: --

*/

/* Libraries */
#include <stdio.h>

/* Main function */
int main()
  {
  float resistor = 1.5E3,
	voltage = 24.0,
	current;
 
  current = voltage/resistor; 
  printf("Current(i) = %.2e\n", current);   
  getchar();
  return(0);
  }
