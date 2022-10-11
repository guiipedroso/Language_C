/*
  Title: Volume (cubic meters)
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* Libraries */
#include <stdio.h>

/* main function */
int
main()
  {
  float pi = 3.141592, r = 0.0, h = 0.0, v = 0.0;

  printf("Enter the radius of the cylinder in meters: ");
  scanf("%f", &r);
  printf("Enter the height of the cylinder in meters: ");
  scanf("%f", &h);

  v = pi * r * r * h;
  printf("Cylinder volume: %.2f cubic meters\n", v);
  
  getchar();
  return(0);
  }
