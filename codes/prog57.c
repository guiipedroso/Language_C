/*
  Title: MENU (Loop While) 
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <menu> */
void 
menu()
  {
  int option;

  while(1)
    {
    printf("<MENU>\n\n1 - Option\n2 - Option\n0 -Exit\n\n");

    printf("Enter a number: ");
    scanf("%d", &option);

    if(option == 1)
      {
        printf("Select 1\n\n");
      }
    else
      {
      if(option == 2)
        {
          printf("Select 2\n\n");
        }
      else 
        {
        if(option == 0)
          {
            break;
          }
	else 
	  {
	  printf("Invalid option\n\n");
	  }	
        }
      }
    }
  }
/* <main function> */
int
main()
  {
  menu();	  
  
  return(0);
  } /* <end main> */
