/*
  Title: Fake memomry 64 bits (FOR) 
  Author: Guilherme Pedroso 
  Date: May 2022
  Updated: --


*/

/* <CONSTANT> */
#define LINE 4
#define COLUMN 16

/* <Libraries> */
#include <stdio.h>

/* <Main function> */
int
main()
  {
  int a, b;
  char done = 0;
  for(int i = 0; i < LINE; i++)
    {
    for(int j = 0; j < COLUMN; j++)
      {
      if((j < 6)&&(done == 0))	      
        {
	printf("%2Xh ", j);	
	}
      else
	{
        printf("FFh ");
	}
      }
    done = 1;
    putchar('\n');
    }

  getchar();
  return(0);
  } /* <end main> */
