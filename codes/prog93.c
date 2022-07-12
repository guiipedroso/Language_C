/*
  Title: Frequency CI 555 
  Author: Guilherme Pedroso 
  Date: July 2022

*/

/* <Libraries> */
#include <stdio.h>

/* <Prototype> */
void ci555(float ra, float rb, float c);

/* <Main function> */
int
main()
  {
  float r1, r2, c;
  printf("Enter a resistor 1: ");
  scanf("%f", &r1);
  printf("Enter a resistor 2: ");
  scanf("%f", &r2);
  printf("Enter a C: ");
  scanf("%f", &c);

  ci555(r1, r2, c);

  getchar();
  return(0);
  } /* <end main> */

/* <Procedure> */
void
ci555(float ra, float rb, float c)
  {
  float freq;

  freq = 1.44/((ra + 2*rb)*c); 
  printf("Frequency = %.3fHz\n", freq);  
  }

