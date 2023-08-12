// String

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int
main()
  {
  char nome[255];

  printf("Digite um nome: ");

  //limpa buffer 
  setbuf(stdin, 0);

  //le string
  fgets(nome, 255, stdin);

  //Limpas as casas nao utilizadas
  nome[strlen(nome)-1] = '\0';

  //imprime palavra
  printf("%s", nome);

  printf("\n\n");
  return(0);
  }

