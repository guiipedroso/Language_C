/*
  Title: Function 3 
  Author: Guilherme Pedroso 
  Date: May 2022
  Updated: --


*/

/* <Libraries> */
#include <stdio.h>

int 
input()
  {
  int x;
  printf("Enter a number: ");
  scanf("%d", &x);
  return x;  
  }

void
value(int n1, int n2)
  {
  if(n1>n2)
    {
    printf("Major is %d\n", n1);
    }
  else
    {
    printf("Major is %d\n", n2);
    }
  }

/* <Main function> */
int
main()
  {
  int v1, v2;

  v1 = input();
  v2 = input();
  value(v1,v2);

  getchar();
  return(0);
  } /* <end main> */
