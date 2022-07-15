/*
  Title: Media (Macros)  
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Macros> */
#define MP(no1, we1, no2, we2, no3, we3) \
       	((no1*we1)+(no2*we2)+(no3*we3))/(we1+we2+we3)

/* <Main function> */
int
main()
  {
  float mp, n1, n2, n3, w1, w2, w3;
  
  printf("Enter note 1: ");
  scanf("%f", &n1);
  printf("Enter the weight: ");
  scanf("%f", &w1);
  printf("Enter note 2: ");
  scanf("%f", &n2);
  printf("Enter the weigth: ");
  scanf("%f", &w2);
  printf("Enter note 3: ");
  scanf("%f", &n3);
  printf("Enter the weight: ");
  scanf("%f", &w3);

  mp = MP(n1,w1,n2,w2,n3,w3);
  printf("%.2f\n", mp);

  getchar();
  return(0);
  } /* <end main> */
