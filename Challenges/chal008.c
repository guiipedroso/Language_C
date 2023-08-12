/*
Crie um algoritmo que leia 3 valores para um vetor de 3 posições e depois calcule a média dos valores acessando o vetor.
*/

#include <stdio.h>
#define TAM 3

int
main()
  {
  int vetor[TAM] = {0};
  float media = 0;
  
  printf("[Lendo vetor]\n");
  for(int i = 0; i < TAM ; i++)
    {
    printf("Posicao %d = %d\n", i, vetor[i]);
    }

  printf("\n[Set vetor]\n");
  for(int i = 0; i < TAM ; i++)
    {
    printf("Posicao %d = ", i);
    scanf("%d", &vetor[i]);
    }
    
  printf("\n[Lendo vetor]\n");
  for(int i = 0; i < TAM ; i++)
    {
    printf("Posicao %d = %d\n", i, vetor[i]);
    }
    
  for(int i = 0; i < TAM ; i++)
    {
    media += vetor[i];
    }  
  media /= TAM;
  
  printf("\n[Media Vetor]\n\7Resultado: %.3f\n", media);
  
  return(0);
  }
