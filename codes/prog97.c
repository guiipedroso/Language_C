/*
  Title: Variables   
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Prototype> */
void var_static();
void var_local();

/* <Global variables> */
int var1 = 9;

/* <Main function> */
int
main()
  {
  var_static();
  var_local();

  var_static();
  var_local();

  var_static();
  var_local();

  getchar();
  return(0);
  } /* <end main> */

void 
var_static()
  {
  static int var3 = 9;
  var3++;
  var1++;
  printf("Global Variable: %d\n", var1);
  printf("Static Varialble: %d\n", var3);
  }

void
var_local()
  {
  int var2 = 9;  
  var2++;
  var1++;
  printf("Local Variable: %d\n", var2);
  printf("Global Variable: %d\n", var1);
  }

