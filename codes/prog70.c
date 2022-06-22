/*
  Title: Increment (Test)
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <main function> */
int
main()
  {
  short unsigned int a, b, c, sum1, begin;
  printf("Enter a number: ");
  scanf("%hd", &a);

  if(a > 85)
    {
    printf("Number greater than 85!\n"); 
    }
  else
    {
    sum1 = a;
    begin = sum1;
    b = ++a;
    c = --sum1;

    printf("N_1 = %d\n", b);
    printf("N_2 = %d\n", c);
    printf("Sum = %d\n", (begin+b+c)); 
    }
  getchar();
  return(0);
  } /* <End main> */
