/*
  Title: Frequency II   
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --


*/

/* <Libraries> */
#include <stdio.h>

/* <MACRO> */
#define PI 3.141592

/* <Prototype> */
float freq(float r, float c);
float time(float r, float c);

/* <Main function> */
int
main()
  {
  float r,c, result;
  char ch;
  printf("Resistor: ");
  scanf("%f", &r);
  printf("Capacitor: ");
  scanf("%f", &c);
   
  printf("A or B: ");
  scanf(" %c", &ch);
  
  switch(ch)
    {
    case 'a':
    case 'A':
      result = freq(r,c);	    
      printf("%.2fHz\n", result);
      break;
    case 'B':
    case 'b':
      result = time(r,c);
      printf("%.5fs\n", result);
      break;
    default:
      printf("Opcao Invalida\n");
    }

  getchar();
  return(0);
  } /* <end main> */


float
freq(float r, float c)
  {
  float f;
  f = 1/(2*PI*r*c);
  return(f);
  }

float 
time(float r, float c)
  {
  float t;
  t = r*c;
  return(t);
  }
