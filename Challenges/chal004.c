/*
Crie um algoritmo que imprima os números de 10 a 0 de forma regressiva. (usando While, Do While ou For)
 */


#include <stdio.h> 

int
main()
  {
  int i = 1;

  printf("[FOR]\n\n");
  for( ; i <= 10; i++)
    {	    
    printf("%d\n", i);
    }
  putchar('\n');
  i = 1;


  printf("[WHILE]\n\n");	
  while(i <= 10)
    {    
    printf("%d\n", i);
    i++;
    }
  putchar('\n');

  i = 1;

  printf("[DO WHILE]\n\n");	  
  do
    {  
    printf("%d\n", i);
    i++;
    } while(i <= 10);
 

  printf("\n\n");
  return(0);
  }

