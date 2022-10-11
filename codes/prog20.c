/*
  Title: IF-ELSE 2
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

  if(num != 0)
    {
    printf("%d is not zero\n", num);
    }
  else
    {
    printf("%d is zero\n", num);
    }

  return(0);
}  /* end main */
