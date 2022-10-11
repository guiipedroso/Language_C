/*
  Title: Igual zero?
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
  int value;
  printf("Enter a value: ");
  scanf("%d", &value); 
  return(value);
  }

/* <function_1> */
void
function_1(int x)
  {
  if(!x)
    {
    printf("X equals zero\n");
    }
  else
    {
    printf("X different from zero\n");
    }
  }

/* <function_2> */
void
function_2(int x)
  {
  if(x)
    {
    printf("X different from zero\n");
    }
  else
    {
    printf("X equals zero\n");
    }
  }

/* <function_3> */
void
function_3(int x)
  {
  if(x!=0)
    {
    printf("X different from zero\n");
    }
  else
    {
    printf("X equals zero\n");
    }
  }

/* <function_4> */
void
function_4(int x)
  {
  if(x==0)
    {
    printf("X equals zero\n");
    }
  else
    {
    printf("X different from zero\n");
    }
  }

void
function_5(int x)
  {
  switch(x)
    {
    case 0:
      printf("X equals zero\n");
      break;
    default:
      printf("X different from zero\n");
    }
  }

/* <Main function> */
int
main()
{
  int value;

  /*
  
  <Function call>

  value = input_value();
  function_1(value);

  value = input_value();
  function_2(value);

  value = input_value();
  function_3(value);

  value = input_value();
  function_4(value); 

  value = input_value();
  function_5(value);
  */

  getchar();
  return(0);
}
