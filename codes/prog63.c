/*
  Title: ASCII table 
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <input> */
int 
input()
  {
  int x;
  printf("Enter a number: ");
  scanf("%d", &x);
  return(x); 
  }

/* <Print loop> */
void
loop(int x)
  {
  char op;
  printf("Enter a charactere: ");
  scanf(" %c", &op);
  puts("\n<Result>");
  putchar('\n');
  for(int i = 1; i <= x; i++)
    {	    
    for(int j = 1; j <= x; j++)    
      {
      printf("%c", op);
      }
    putchar('\n');
    }
  }

/* <main function> */
int
main()
  {
  int value;
  value = input();
  loop(value);
  printf("\n");  
  getchar();  
  return(0);
  }
