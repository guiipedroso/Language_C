/*
  Title: Celsius
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/

/* Libraries */
#include <stdio.h>

/*
  <Input function>
*/
float
value_input()
  {
  float value;
  printf("Enter a value: ");
  scanf("%f", &value);
  return(value);
  }
/*
  <Celsius function>

  Formula ==> Tf = (1,8 x Tc) + 32

*/
float 
celsius(float c)
  {
  float fah;
  fah = (1.8*c) + 32;
 
  return(fah);	  
  }

/*
  <Print function>
*/
void
print_fah(float c, float tf)
  {
  printf("%.2fC ==> %.2fF\n", c, tf);
  }
/*
  <Main function> 
*/
int
main()
  {
  float c, tf;
  c = value_input();
  tf = celsius(c);
  print_fah(c,tf);
  
  return(0);
  }
