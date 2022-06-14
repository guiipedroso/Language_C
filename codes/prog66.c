/*
  Title: ASCII table (Tree) II
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
  printf("\n");
  return(x); 
  }

/* <Print loop> */
void
loop(int x)
  {
  int ch = 65;

  for(int i = 1; i <= x; i++)
    {	   
    int j = 1;	    
    for(int j = 1; j <= i; j++)    	    
      {
      printf("%c", (char) ch);
      }
      putchar('\n');
      ch = ch + 1;
    }
  }

/* <main function> */
int
main()
  {
  int value;
  value = input();
  loop(value);  
  getchar();  
  return(0);
  }
