/*
  Title: ASCII table
  Nome: Guilherme Pedroso
  Date: May 2022
  Updated: --
*/

/* Libraries */
#include <stdio.h>

/* main function */
int 
main()
  {
  char caractere;

  printf("Enter the caractere: ");
  scanf(" %c", &caractere);
  printf("Caractere: '%c' ==> ASCII: %d\n", caractere, caractere);
  
  getchar();
  return(0);
  }

