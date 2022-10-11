/*
  Title: Salary
  Author: Guilherme Pedroso
  Date: June 2022 
  Updated: --
*/

/* Libraries */
#include <stdio.h>

void print_salary()
  {
  printf(" Salary\t\t\t Rate\n");
  printf(" < 500\t\t\t 4.5%%\n");
  printf(" >= 1500 and < 7000\t 15%%\n");
  printf(" >= 7000\t\t 30%%\n");
  }

/* main function */
int 
main()
  { 
  float rate,salary;
  print_salary();
  
  printf("Salary: ");
  scanf("%f", &salary);
  
  if(salary < 500)
    {
    rate = 0.045;
    }
  else 
    {
    if(salary < 7000)
      {
      rate = 0.15;
      }
    else
      {
      rate = 0.30;
      }
    }

  printf("\nSalary: %.2f\nTax: %.2f\nTotal: %.2f\n", salary, salary*rate, salary * (1.0 - rate));
  getchar();
  return(0);
  }
