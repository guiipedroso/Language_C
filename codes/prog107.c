/*
  Title: Hello World (Macro)   
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Macros> */
#define talk printf("Hello "); \
	     printf("World!\n")

/* <Prototypes> */

/* <Main function> */
int
main()
  {
  talk;
  getchar();
  return(0);
  } /* <end main> */
