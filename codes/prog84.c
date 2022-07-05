/*
  Title: Function x_isdigit  
  Author: Guilherme Pedroso 
  Date: June 2022
  Updated: --


*/

/* <Libraries> */
#include <stdio.h>

int digit(char ch)
  {
  return(ch > '0' && ch <= '9');  
  }

/* <Main function> */
int
main(void)
  {
  char c;
  while(!0)
    {
    c = getchar();
    if(!digit(c))
      {
      putchar(c);
      }
    }

  getchar();
  return(0);
  } /* <end main> */
