/*
  Title: Basic Calculator with Switch
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
  int num1, num2, result;
  char op;
  
  printf("Write the expression: ");
  scanf("%d %c %d", &num1, &op, &num2);

  switch(op)
    {
    case '+':
      {
      result = num1 + num2;
      break;
      }
    case '-':
      {
      result = num1 - num2;
      break;
      }
    case '*':
    case 'x':
    case 'X':
      {
      result = num1*num2;
      break; 
      }
    case '/':
    case '\\':
    case ':':
      {
      result = num1/num2;
      break;
      }
    }
    printf("%d %c %d = %d\n", num1, op, num2, result);
  
  getchar();
  return(0);
  } /* <end main> */
