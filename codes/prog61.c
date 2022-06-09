/*
  Title: ASCII table 
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <main function> */
int
main()
  {
  for(int i = 0; i <= 255; i++)
    {
    printf("%d ==> %c\n", i, (char)i);
    }
  getchar();  
  return(0);
  }
