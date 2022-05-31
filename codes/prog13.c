/*   
  Title: Casting
  Author: Guilherme Pedroso
  Date: May 2022
  Updated: -- 

*/

/* Libraries */
#include <stdio.h>

/* main function  */

int 
main()
  {
  int number;
  printf("Enter the integer[0-255]: ");
  scanf("%d", &number);
  printf("Integer: %d ==> caractere: %c\n", number, (char) number);

  getchar();
  return(0);
  } /* end main */
