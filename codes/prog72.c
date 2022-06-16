/*
  Title: Frequency Hz (While)
  Author: Guilherme Pedroso de Lima
  Date: June 2022
  Updated: --

*/

/* Libraries */
#include <stdio.h>

/* Main function */
int
main()
  {
  int r1, r2, i, tmp;	  
  printf("Set the range: ");
  scanf("%d %d", &r1, &r2);
 
  if(r1 > r2)
    {
    tmp = r1;
    r1 = r2;
    r2 = tmp;
    }  

  i = r1;
  putchar('\n');
  while(i <= r2)
    {
    printf("%dHz\n\n", i);
    i++;
    }

  getchar();
  return(0);
  } /* end main */
