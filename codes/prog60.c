/*
  Title: Error Increment
  Author: Guilherme Pedroso
  Date: June 
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Main function> */
int
main()
  {
  int i = 0;
  printf("\n <Before>\n i = %d\n", i);

  if(i++) /* even if false, variable is incremented */
    {
    printf("Hello\n");
    }
  printf("\n <After>\n i = %d\n", i);

  getchar();
  return(0);
  }
