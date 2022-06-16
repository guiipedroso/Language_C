/*
  Title: ASCII table IV
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <main function> */
int
main()
  {
  int count;
  char ch;
  for(int i = 0; i <= 255; i++)
    {	    
    printf("%c\n", (char)i); 
    count++;
    if(count == 20)
      {
      do
        {	          
	count = 0;	
	ch = getchar();
        printf("Pres <c> or <C>\n");
	} while(ch != 'C' && ch != 'c');
      }
    }
    return(0);
  }
