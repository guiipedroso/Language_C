/*
  Title: Increment (Test)
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Sum> */
int 
sum(int sum, int a, int b, int c, int d)
  {
  sum = sum + a + b + c + d;
  return(sum);
  }

/* <main function> */
int
main()
  {
  int a, b, c, d, sum1 = 0;
  printf("Enter 4 numbers: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  /* <Original values> */
  printf("\n<Original values>\n\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);
  printf("d = %d\n", d);
  
  sum1 = sum(sum1, a, b, c, d);
  printf("\nSum = %d\n", sum1);

  d = c;
  c = a;
  a++;
  b--;
  d = d + b;

  sum1 = sum(sum1, a, b, c, d);
 
  putchar('\n');
  /* <New values>*/
  printf("<New values>\n\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);
  printf("d = %d\n", d);
  putchar('\n');
  printf("Sum = %d\n", sum1);

  getchar();
  return(0);
  } /* <End main> */
