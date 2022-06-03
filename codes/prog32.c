/*
  Title: 
  Author: Guilherme Pedroso 
  Date: June 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Main function> */
int
main()
  {
  char try;	  
  printf("Enter a value: ");
  scanf("%c", &try);
  
  /*
    True ==> if(try) 
    False ==> if(!try)
  */
  if(try)   
    {
    printf("Value is true\n");
    }
  else
    {
    printf("Value is false\n");
    }
  return(0);
  } /* <End main> */
