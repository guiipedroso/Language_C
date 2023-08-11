/*
  Crie um algoritmo que leia 2 notas e mostre o valor absoluto da 
  diferenca entre elas. 
*/


#include <stdio.h> 
#include <stdlib.h>

int
main()
  {
  int grade1, grade2;	  
  printf("Entre com a nota 1: ");
  scanf("%d", &grade1);
  printf("Entre com a nota 2: ");
  scanf("%d", &grade2);
  
  printf("A diferente entre eles eh igual a %d\n\n", abs(grade1 - grade2));


  return(0);
  }

