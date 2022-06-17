/*
  Title: Box (FOR)  
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
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  for(int i = 0; i < num; i++)
    {
    for(int j = 0; j <= i; j++)
      {	    
      printf("#");
      }
    putchar('\n');
    }

  getchar();
  return(0);
  } /* <end main> */
