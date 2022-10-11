/*
  Title: Relational operators
  Author: Guilherme Pedroso
  Date: May 2022
  Updated: --
*/

/* Libraries */
#include <stdio.h>

/* function main */
int
main()
{
  int p, q;
  printf("Enter two integers: ");
  scanf("%d %d", &p, &q);

  printf("P = Q ==> %d\n", p == q);
  printf("P > Q ==> %d\n", p > q);
  printf("P >= Q ==> %d\n", p >= q);
  printf("P < Q ==> %d\n", p < q);
  printf("P <= Q ==> %d\n", p <= q);
  printf("P != Q ==>  %d\n", p != q);
  
  return(0);
}
