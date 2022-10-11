/*
  Title: IF-ELSE 3
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
  int num1, num2;

  printf("Enter a number: ");
  scanf("%d", &num1);
  printf("Enter another number: ");
  scanf("%d", &num2);
  
  if(num1 != num2)
    {
    printf("The numbers are different\n");
    }
  else
    {
    printf("The numbers are the same\n");
    }

  getchar();
  return(0);
  } /* <End main> */
