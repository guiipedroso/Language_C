/*
  Title: Skeleton Menu
  Author: Guilherme Pedroso de Lima
:x
  Updated: --

*/

/* Libraries */
#include <stdio.h>

/* <Menu> */
void
menu()
  {
  char op;	  

  do
    {
    printf("\n [MENU]\n");
    printf("\n(m) Math\n");
    printf("(p) Physical\n");
    printf("(q) Quit\n");

    printf("\nOption: ");
    scanf(" %c", &op);

    switch(op)
      {
      case 'm':
      case 'M':
	{
        printf("Math\n");
	break;
	}
      case 'p':
      case 'P':
	{
	printf("Physical\n");
	break;
	}
      case 'q':
      case 'Q':
	{
	printf("Exit\n");
	break;
	}   
      default:
	printf("Invalid\n");
      }  
    } while(op != 'q' && op != 'Q');
  }

/* Main function */
int
main(void)
  {
  menu();

  getchar();
  return(0);
  } /* end main */
