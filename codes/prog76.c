/*
  Title: Fibonacci
  Author: Guilherme Pedroso 
  Date: June 2022
  Updated: --


*/

/* <Libraries> */
#include <stdio.h>
#include <unistd.h>

/* <Main function> */
int
main(void)
  {
  long int actual = 1, previous = 0, next = 0;
  int i = 0;
  printf("%ld\n", previous);
  printf("%ld\n", actual);

  while(1)
    {	    
    next = previous + actual;
    previous = actual;
    actual = next;
    printf("%ld\n", next);   
    sleep(1);
    i++;
    }  
 
  return(0);
  } /* <end main> */
