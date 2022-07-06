/*
  Title: Hour  
  Author: Guilherme Pedroso 
  Date: Jul 2022
  Updated: --


*/

/* <Libraries> */
#include <stdio.h>

/* <Input> */
int inp_h()
  {
  int h;	  
  printf("Enter with a hour: ");
  scanf("%d", &h);
  return h;
  }
int sec(int hour)
  {
  hour *= 3600;
  return hour;
  }	

/* <Main function> */
int
main(void)
  {
  int num;
  num = inp_h();
  printf("%d hour(s) = %d seconds\n ", num, sec(num));
  getchar();
  return(0);
  } /* <end main> */
