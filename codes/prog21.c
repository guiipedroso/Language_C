/*
  Title: Basic Salary
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
  float salary;
  printf("Salary: ");
  scanf("%f", &salary);

  if(salary < 50000)
    {
    salary += 2500;
    }
  printf("New salary: %.3f\n", salary);
  
  return(0);
  } /* end main */
