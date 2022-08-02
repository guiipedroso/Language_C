/*
  Title: Voltage divider
  Author: Guilherme Pedroso
  Date: May 2022
  Updated: --

*/

/* Libraries */
#include <stdio.h>

/* Main function */
int main()
  {
  float resistor_1, resistor_2, voltage_input, voltage_output;
  resistor_1 = 100.0E3;
  resistor_2 = 1.5E3;
  voltage_input = 40.0;
  voltage_output = voltage_input*resistor_2/(resistor_2+resistor_1);
  printf("Voltage output = %.3f\n", voltage_output); 
  getchar();
  return(0);
  }
