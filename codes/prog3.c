/* ================================================================
  Program to illustrate the use of comments

  Author: Guilherme Pedroso
  Date: May 2022
  Updated: --
 
================================================================== */


/* =============================================================== */
/* Libraries */

#include <stdio.h>

/* =============================================================== */
/* Main Function */
int main()
  {
  int v1, v2;
 
  printf("Enter two integer numbers: ");
  scanf("%d %d", &v1, &v2);

  printf("%d + %d = %d\n", v1,v2, v1+v2);
  printf("%d - %d = %d\n", v1,v2, v1-v2);
  printf("%d * %d = %d\n", v1,v2, v1*v2);
  printf("%d / %d = %d\n", v1,v2, v1/v2);
  
  getchar();  
  return(0);
  } /* end main */

/* =============================================================== */
/* End of program */
