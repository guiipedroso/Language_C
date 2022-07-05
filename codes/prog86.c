/*
  Title: Math  
  Author: Guilherme Pedroso 
  Date: May 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

float pot(int n, int p)
  {
  if(p == 0) 
    {
    return(1);
    }	  
  else
    {	  
    for(int i = 1; i < p; i++)
      { 
      n*= n;
      }
    return n;
    }

/* <Main function> */
int
main(void)
  {
  float hi;
  hi = pot(3,2);
  printf("%f", hi);
  hi = pot(3,0);
  printf("%f", hi);

  getchar();
  return(0);
  } /* <end main> */
