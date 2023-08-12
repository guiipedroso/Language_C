/*
Preencha uma matriz 2x2 lendo valores do usuário e depois troque os valores entre a primeira e a segunda linha.
*/

#include <stdio.h>

int
main()
  {
  int matriz[2][2] = {0}, aux, aux2;

  for(int i = 0; i < 2; i++) 
    {
    for(int j = 0; j < 2; j++)	    
      {
      printf("Entre com o valor de matriz[%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
      }
    }
  
  aux = matriz[0][0];
  aux2 = matriz[1][0];

  matriz[0][0] = aux2;
  matriz[1][0] = aux;

  aux = matriz[0][1];
  aux2 = matriz[1][1];
  
  matriz[0][1] = aux2;
  matriz[1][1] = aux;

  for(int i = 0; i < 2; i++) 
    {
    for(int j = 0; j < 2; j++)	    
      {
      printf("A matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
      }
    }

  putchar('\n');
  return(0);	  
  }
