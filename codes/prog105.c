/*
  Title: Vogal 
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Prototypes> */
int IsVogal(char ch);

/* <Main function> */
int
main(void)
  {
  int result;

  while(1)
    {
    char ch;
    printf("Enter a caractere: ");
    scanf(" %c", &ch);    
    result = IsVogal(ch);	    
    if(result == 1)
      {	    
      printf("Is vogal\n");
      }
    else
      {
      printf("Isn't vogal\n");
      }
    }
  getchar();
  return(0);
  } /* <end main> */

int
IsVogal(char ch)
  {
  switch(ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':	
    case 'I':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
      return(1);
    default:
      return(0);
    }
  }
