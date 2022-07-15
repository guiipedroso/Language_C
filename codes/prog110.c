/*
  Title: Rand (Macro) 
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>
#include <stdlib.h>

/* <Macros> */
#define random register int i; \ 
                for(i=0;i<10;i++) \
                  printf("%d\n", rand()/128)

/* <Prototypes> */

/* <Main function> */
int
main()
  {
  random;
  getchar();
  return(0);
  } /* <end main> */
