/*
  Title: Date 2
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
  short int d,m;
  long int y;

  printf("Enter the date in the format aaaa-mm-dd: ");
  scanf("%ld-%hd-%hd", &y,&m,&d);
  printf("The date chosen was %hd/%hd/%ld\n", d,m,y);
  
  return(0);
}
