/*
  Title: Month
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --
*/

/* <Libraries> */
#include <stdio.h>

/* <input> */
int
input_value()
  {
  int x;
  printf("Enter the month: ");
  scanf("%d", &x);  
  return x;
  }

/* <Function_IF_ELSE> */
void
function_1(int m)
  {
  int days;

  if(m == 2)
    {
    days = 28;
    }
  else 
    {
      if((m == 4) || (m == 6) || (m == 9) || (m == 11))
        {
        days = 30;
        }    
      else
        {
	days = 31;
	}
    }
  printf("The month %d have %d days.\n", m, days);
  }

/* <Function_Switch> */
void
function_2(int m)
  {
  int days;
  
  switch(m)
    {
    case 2:
      days = 28;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      days = 30;
      break;
    default:
      days = 31;  
    }
  printf("The month %d have %d days.\n", m, days);
  }

/* <Function Switch without break> */
void
function_3(int m)
  {
  int days = 0;
  switch(m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      days = 1;
    case 4:
    case 6:
    case 9:
    case 11:
      days += 2;
    default:
      days += 28;   
    }
  printf("The month %d have %d days.\n", m, days);
  }

/* <Main function> */
int
main()
  {
  int m;

  /*
  <Function call>
 
  m = input_value();
  function_1(m);

  m = input_value();
  function_3(m);

  m = input_value();
  function_3(m);
  */

  return(0);
  } /* <End main> */
