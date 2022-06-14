/*
  Title: ASCII table (Tree)
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
  
  for(int i = 1; i <= x; i++)
    {	   
    int j = 1;	    
    int ch = 65;
    for(int j = 1; j <= i; j++)    	    
      {
      printf("%c", (char) ch);
      ch = ch + 1;
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
  getchar();  
  return(0);
  }
