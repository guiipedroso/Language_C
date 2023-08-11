/*
Crie um algoritmo que imprima os números pares de 10 a 20 (usando While, Do While ou For)
*/

#include <stdio.h> 

int
main()
  {
  int i = 10;
  
  printf("[FOR]\n\n"); 
  for( ; i <= 20; i++ )
    {
    if(i % 2 == 0)
      {	    
      printf("%d\n", i);
      }
    } 
  printf("\n[WHILE]\n\n"); 

  i = 10;
  while( i <= 20 )
    {
    if(i % 2 == 0)
      {	    
      printf("%d\n", i);
      }
    i++;
    }

  i = 10;
  printf("\n[DO WHILE]\n\n"); 
  do 
    {
    if(i % 2 == 0)
      {	    
      printf("%d\n", i);
      }
    i++;
    }while( i <= 20 );

  printf("\n\n");
  return(0);
  }

