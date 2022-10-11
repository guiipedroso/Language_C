/*
  Title: Leap year 
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --
*/

/* <Libraries> */
#include <stdio.h>

/* <Input> */

int 
input_value()
  {
  int x;

  printf("Enter the year: ");
  scanf("%d", &x);
  return x;
  }

/* <Function_IF_ELSE> */
void
leap(int y)
  {
  if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
    {
    printf("Year is leap\n");
    }
  else
    {
    printf("Year isn't leap\n");
    }
  }

/* <Main function> */
int
main()
  {
  int year;

  year = input_value();
  leap(year);
  
  getchar();
  return(0);
  }
