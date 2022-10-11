/*
  Title: Salary 2 (Using "?")
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --
*/

/* Libraries */
#include <stdio.h>

/* main function */
int 
main()
  {
  float salary;

  printf("Salary: ");
  scanf("%f", &salary);
  salary = salary > 1500 ? salary * 1.05 : salary * 1.10;
  printf("\nNew salary: %.2f\n", salary);
  
  return(0);
  } /* end main */
