/*
  Title: Basic Calculator 
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --
   
*/

/* Libraries */
#include <stdio.h>

/* main function */
int
main()
  {
  int num, num2;

  printf("Enter two integers: ");
  scanf("%d %d", &num, &num2);
  printf("%d + %d = %d\n", num, num2, num+num2);
  printf("%d - %d = %d\n", num, num2, num-num2);
  printf("%d * %d = %d\n", num, num2, num*num2);
  printf("%d / %d = %d\n", num, num2, num/num2); 
    
  getchar();
  return(0);
  } /* end main */
