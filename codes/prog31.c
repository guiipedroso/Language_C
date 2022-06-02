/*
  Title: DESC
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Main function> */
int
main()
  {
  int num1, num2, temp;

  printf("Enter a number: ");
  scanf("%d", &num1);
  printf("Enter another number: ");
  scanf("%d", &num2);

  if(num1 < num2)
    {
    temp = num1;
    num1 = num2;
    num2 = temp;
    }	  
  printf("%d %d\n", num1, num2);
    
  getchar();
  return(0);
  }
