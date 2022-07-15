/*
  Title: Hello World (Macro) II
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Macros> */
#define talk(text) printf(#text)

/* <Main function> */
int
main()
  {
  talk(Hello World!\n);
  getchar();
  return(0);
  } /* <end main> */
