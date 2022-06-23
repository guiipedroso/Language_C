/*
  Title: Function  
  Author: Guilherme Pedroso 
  Date: May 2022
  Updated: --


*/

/* <Libraries> */
#include <stdio.h>

void
line(num)
  {
  for(int i = 0; i < num; i++)
    {
    putchar('*');    
    }
  putchar('\n');
  }

/* <Main function> */
int
main()
  {
  line(5);
  line(20);
  line(7);
  line(8);

  getchar();
  return(0);
  } /* <end main> */
