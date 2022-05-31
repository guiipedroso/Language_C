/*
  Title: Hour
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
  long int seconds;

  printf("Enter the seconds: ");
  scanf("%ld", &seconds);

  printf("Hours: %ld\n", seconds/(60*60));
  printf("Minutes: %ld\n", seconds/60);
  printf("Seconds: %ld\n", seconds % 60);

  getchar();
  return(0);
}
