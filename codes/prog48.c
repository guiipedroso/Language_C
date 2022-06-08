/*
  Title: Multiplication table (Loop While)
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
  int value;	  
  printf("Enter a value: ");
  scanf("%d", &value);
  return(value);
  }

/* <multiplication table function> */
void
m_table(int x)
  {	
  int i = 0;
  printf("\n<Multiplication table number %d>\n\n", x);
  while(i <= 10)
    {
    printf("%d X %d = %d\n", x, i, x*i);
    i++;
    }
  } /* <end function> */



/* <main function> */
int
main()
  {
  int num;

  num = read_value();
  m_table(num); 

  getchar();
  return(0);
  }
