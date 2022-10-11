/*
  Title: Character 
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* Libraries */
#include <stdio.h>

/* main function */
int
main()
{
  char c1, c2;

  printf("Enter a caractere: ");
  scanf("%c", &c1);
  getchar();
  printf("Enter a caractere: ");
  scanf("%c", &c2);
  printf("\nFirst caractere: %c\nSecond caractere: %c\n", c1, c2);
  
  getchar();
  return(0);
}
