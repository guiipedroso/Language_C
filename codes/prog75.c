/*
  Title: Break (Ex1) 
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Main function> */
int
main(void)
  {
  int num, i;

  while(1)
    {
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 1)
      {
      printf("Error\n");
      break;
      }
    }

  getchar();
  return(0);
  } /* end main */
