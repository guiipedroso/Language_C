/* =============================================================
  Title: Types modifiers  
  Author: Guilherme Pedroso
  Date: May 2022 
  Updated: --

================================================================= */

/* Libraries */
#include <stdio.h>

/* Macros */

/*Main function*/
int 
main()
  {
  printf("void = %ld bytes\n", sizeof(void));	  
  printf("char = %ld bytes\n", sizeof(char));  
  printf("int = %ld bytes\n", sizeof(int));
  printf("float = %ld bytes\n", sizeof(float));
  printf("double = %ld bytes\n", sizeof(double));

  getchar();
  return(0);
  } /* end main*/
