/*
  Title: Password  
  Author: Guilherme Pedroso 
  Date: May 2022
  Updated: --


*/

/* <Libraries> */
#include <stdio.h>
#include <stdlib.h>

/* <Main function> */
int
main(void)
  {
  int i = 0, pass;	  
  printf("Enter a new password: ");
  scanf("%d", &pass);
  system("clear");

  for( ; i != pass; )
    {
    printf("Password: ");
    scanf("%d", &i);
    } 

  getchar();
  return(0);
  } /* <end main> */
