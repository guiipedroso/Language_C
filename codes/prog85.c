/*
  Title: ABS value
  Author: Guilherme Pedroso 
  Date: Jul 2022
  Updated: --


*/

/* <Libraries> */
#include <stdio.h>

/* <INPUT> */
int value()
  {
  int x;
  printf("Enter a value: ");
  scanf("%d", &x);
  return x;
  }

/* <ABS> */
int Abs(int num)
  {
  if(num < 0)
    {
    num *= -1;
    }

  return num;
  }

/* <Main function> */
int
main(void)
  {
  int num;
  
  num = value();
  printf("Abs = %d\n", Abs(num));

  getchar();
  return(0);
  } /* <end main> */
