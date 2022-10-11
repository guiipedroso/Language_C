/*
  Title: Register
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --
*/

/* <Libraries> */
#include <stdio.h>

/* <Main function> */
int
main()
  {
  unsigned char regist = 0x00;
  
  printf("Enter a value for the register[00h-FFh]: ");
  scanf("%hhX", &regist);

  printf("Value: %Xh\n", regist);

  regist = regist ? 0x80 : 0x00;

  printf("Correct value: %Xh\n", regist);
  getchar();
  return(0);
  }
