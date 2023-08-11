/*
  Crie um algoritmo que leia 3 números inteiros de uma só vez e coloque os resultado da multiplicação entre os 3 em uma variável própria, depois exiba essa variável.
 */


#include <stdio.h> 

int
main()
  {
  int num1, num2, num3, result;
  
  printf("Entre com 3 valores inteiros: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  result = num1*num2*num3;
  printf("%d", result);

  printf("\n\n");
  return(0);
  }

