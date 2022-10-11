/*
  Title: Bank
  Author: Guilherme Pedroso
  Date: May 2022
  Updated: -- 
*/

/* Libraries */
#include <stdio.h>

/* Main function */
int
main()
  {
  short age; //hd
  int total;
  long int n_account;//ld int and if use for long is igual lf
	 
  printf("Age: ");
  scanf("%hd", &age);
  printf("Total: ");
  scanf("%d", &total);
  printf("Number account: ");
  scanf("%ld", &n_account);
  printf("A person, %hd years old, account %ld, received U$%d", age, n_account, total);
  
  printf("\n\n");  
  getchar();
  return(0);
  }
