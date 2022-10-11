/* ============================================================
  Title: XOR
  Author: Guilherme Pedroso 
  Date: June 2022
  Updated: --
=============================================================== */

/* <Libraries> */
#include <stdio.h>

/* <Main function> */
int
main()
  { 
  int opP, opQ, xor;	  
  printf("Enter with op_P: ");
  scanf("%d", &opP);
  printf("Enter with op_Q: ");
  scanf("%d", &opQ);
  
  xor = (opP || opQ) && !(opP && opQ); 	  
  
  printf("%d XOR %d = %d\n", opP, opQ, xor);
  
  getchar();
  return(0);
  } /* <End main> */
