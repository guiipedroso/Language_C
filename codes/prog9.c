/*
  Title: Frequency
  Author: Guilherme Pedroso
  Date: May 2022
  Updated: --

*/

/* Libraries */
#include <stdio.h>

/* Main function*/
int main()
  {
  float pi = 3.141592, 
        capacitor = 1.0E-6,
       	resistor = 3.0E3,
	frequency;

  frequency = (1/(2*pi*resistor*capacitor));
  printf("%.2f", frequency);
  getchar();
  return(0);
  }
