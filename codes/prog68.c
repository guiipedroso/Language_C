/*
  Title: ASCII table IV
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <main function> */
int
main()
  {
  int x, y, tmp;
  printf("Enter the interval between two numbers:  ");
  scanf("%d %d", &x, &y);

  if(x > y)
    {
    tmp = x;
    x = y;
    y = tmp;    
    }	  

  for(int i = x; i <= y; i++)
    {	    
    printf("%d ==> %c\n", i, (char)i);	    
    }
    return(0);
  } /* <End main> */
