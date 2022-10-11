/*
  Title: Tax 
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
  float salary, tax = 0.0;
  char sex;

  printf("Enter the salary: \n");
  scanf("%f", &salary);
  printf("What is your sex? M or F? ");
  scanf(" %c", &sex);

  switch(sex)
    {
    case 'F':
    case 'f':
      tax = 0.10;
      break;
    case 'm':
    case 'M': 
      tax = 0.15;
      break;
    }
  printf("Tax %.2f\n", salary*tax);

  getchar();
  return(0);
  }

