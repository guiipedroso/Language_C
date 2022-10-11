/*
  Title: Date
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
  short int d, m;
  long int y;

  printf("Enter the date in the format dd/mm/aaaa: ");
  scanf("%hd/%hd/%ld", &d, &m ,&y);
  printf("Date ==> %hd/%hd/%ld\n", d,m,y);

  return(0);
}
