/*
  Title: IF-ELSE
  Author: Guilherme Pedroso
  Date: May 2022
  Updated: --

*/

/* Libraries */
#include <stdio.h>

/* main function */
int
main()
  {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
   
  if(num > 0)
    {
    printf("Positive number\n");
    }
  else
    {
    printf("Negative number\n");
    }
  
  getchar();
  return(0);
  }
