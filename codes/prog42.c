/*
  Title: Seconds
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
  int n_hours;
  long seconds;

  printf("Enter the seconds: ");
  scanf("%ld", &seconds);

  n_hours = seconds < 3600? printf("0 hours\n") : printf("%ld hours\n", seconds/(60*60));
 
  getchar(); 
  return(0);
}

