/*
  Title: Max value  
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Prototype> */
float Max(float x, float y, float w);

/* <Main function> */
int
main(void)
  {
  float result;  

  result = Max(17,9,11);
  printf("The major is %.2f\n", result);
  result = Max(3,15,10);
  printf("The major is %.2f\n", result);
  result = Max(16,7,23);
  printf("The major is %.2f\n", result);

  getchar();
  return(0);
  } /* <end main> */

float
Max(float x, float y, float w)
  {
  if(x > y)
    { 
    if(x > w)
      {    
      return(x);
      }
    else
      {
      return(w);
      }
    }
  else
    {
    if(y > w)
      {
      return(y);
      } 
    else 
      {
      return(w);
      }
    }
  }
