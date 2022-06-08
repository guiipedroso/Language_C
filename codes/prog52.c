/*
  Title: Multiplication table (Loop For)
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <input> */
int
read_value()
  {
  int x;
  printf("Enter a value: ");
  scanf("%d", &x);
  return x; 
  }

/* <multiplication table function> */
void
m_table(int value)
  {
  for(int i = 0; i <= value; i++)
    {	    
    printf("\n<Multiplication table number %d>\n\n", i);
    for(int j = 0; j <= 10; j++)
      {	    
      printf("%d X %d = %d\n", i, j, i*j);
      }
    }  
  }

/* <Main function> */
int
main()
  {
  int num;
  num = read_value();
  m_table(num);
  return(0);
  } /* <end main> */
