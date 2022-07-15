/*
  Title: Salary with Array 
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Main function> */
int
main()
  {
  float salary[12];
  float total = 0;
  register int i;

  for(i = 0; i < 12; i++)
    {
    printf("Salary of the month %d: ", i+1);
    scanf("%f", &salary[i]);
    total += salary[i];
    }
  puts("\n");
  puts("[Year]");
  for(i = 0; i < 12; i++)
    {
    printf("Month %d: %.2f\n", i+1, salary[i]);
    }
  printf("\nTotal = %.2f\n", total);

  getchar();
  return(0);
  } /* <end main> */
