/*
  Title: Diff for 
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Main function> */
int
main(void)
  {
  int a = 0, b = 1;	  
  for( ; a+b<=100; a++, a++)
    {
    printf("%d\n", a+b);    
    }

  return(0);
  } /* end main */
