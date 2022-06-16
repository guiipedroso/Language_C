/*
  Title: Challenge Menu (While) 
  Author: Guilherme Pedroso de Lima
  Date: June 2022
  Updated: --

*/

/* Libraries */
#include <stdio.h>

/* Main function */
int
main()
  {
  char op;
  do
    {	  
    printf("\n [MENU]\n");
    printf("(N) - New customers\n");
    printf("(D) - Delete customers\n");
    printf("(L) - List customers\n");
    printf("(Q) - Quit\n");
    
    printf("\nEnter with the option: ");
    scanf(" %c", &op);

    putchar('\n');
    switch(op)
      {
      case 'n':
      case 'N':
        printf("new customers\n");
	break;
      case 'd':
      case 'D':
        printf("Delete customers\n");
        break;
      case 'l':
      case 'L':
        printf("List customers\n");
        break;
      case 'q':
      case 'Q':
        printf("Exit\n");
        break;
      default:
	printf("Invalid\n");
      }
    } while (op != 'q' && op != 'Q');

  getchar();
  return(0);
  } /* end main */
