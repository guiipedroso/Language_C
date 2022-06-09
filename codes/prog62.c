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
  printf("Enter a value: ");
  scanf("%d", &x);
  putchar('\n');
  return(x); 
  }

/* <Print loop> */
void
loop(int x)
  {
  int j, i;
  for(i = 1, j = x; i <= x, j > 0; i++, j--)
    {
    printf("%d\t%d\n", i, j);
    }
  }

/* <main function> */
int
main()
  {
  int num;
  num = input();
  loop(num);
  
  getchar();  
  return(0);
  }
