/*
  Title: Procedure with for II
  Author: Guilherme Pedroso 
  Date: July 2022

*/

/* <Libraries> */
#include <stdio.h>

/* <Prototype> */
void screen();

/* <Main function> */
int
main()
  {
  int v;	  
  
  do
    {
    printf("Enter a value: ");
    scanf("%d", &v);
    screen(v);
    }while(1);

  getchar();
  return(0);
  } /* <end main> */
/* <Procedure> */
void
screen(int x)
  {
  if(x != 3)
    {
    printf("Not is three\n");
    }	  
  else
    {	  
    printf("+++++++++++++++++\n");
    printf("|               |\n");
    printf("| N U M B E R 3 |\n");
    printf("|               |\n");
    printf("+++++++++++++++++\n");
    }
  printf("\n");
  }

