/*
Crie um algoritmo que informe se o valor lido é primo ou não
*/

#include <stdio.h> 

int
main()
  {
  int num, contt = 1;

  printf("Entre com um numero: ");
  scanf("%d", &num);

  for(int i = 2; i <= num; i++)
    { 
    if(num % i == 0)
      {
      contt++;
      }
    }
  
  if(contt == 2)
    {
    printf("O numero %d eh primo\n", num);
    }
  else
    {
    printf("O numero %d nao eh primo\n", num);
    }
  

  printf("\n");
  return(0);
  }

