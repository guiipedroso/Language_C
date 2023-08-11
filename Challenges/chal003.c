/*
Crie um algoritmo que leia 3 valores e informe se eles são iguais entre si para formarem os lados de um triângulo equilátero.
*/

#include <stdio.h> 



int
main()
  {
  int num1, num2, num3;

  printf("Informe um valor 1: ");
  scanf("%d", &num1);
  
  printf("Informe um valor 2: ");
  scanf("%d", &num2);
  
  printf("Informe um valor 3: ");
  scanf("%d", &num3);
  
  if((num1 == num2) && (num1 == num3))
    {
    printf("Eh um equilatero");
    }
  else
    {
    printf("Nao eh equilatero");
    }

  printf("\n\n");
  return(0);
  }

