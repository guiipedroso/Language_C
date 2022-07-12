/*
  Title: Procedure with for
  Author: Guilherme Pedroso 
  Date: July 2022

*/

/* <Libraries> */
#include <stdio.h>

/* <Prototype> */
void print();

/* <Main function> */
int
main()
  {
  int x;	  
  
  do
    {
    printf("Enter a value: ");
    scanf("%d", &x);
    print(x);
    }while(1);

  getchar();
  return(0);
  } /* <end main> */
/* <Procedure> */
void
print(int x)
  {
  if(x != 7)
    {
    printf("Not is seven\n");
    }	  
  else
    {
    for(int i = 0; i < 10; i++)
      {	  
      printf("*");
      }
    }
  printf("\n");
  }

