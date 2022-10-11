/*
  Title: Hours
  Author: Guilherme Pedroso
  Date: June 2022
  Updated: --

*/


/* Libraries */
#include <stdio.h>

/* <Input function> */
int 
value_input()
  {
  int minute;
  printf("Enter a value: ");
  scanf("%d", &minute);
  return(minute);
  }
/* <Converting function> */
float 
conv_minute(int min)
  {
  float hour;
  hour = min/60.0;
  return(hour);
  }
/* <Print function> */
void
print_hour(int min, float hour)
  {
  printf("%d minutes = %.2f hours\n", min, hour);
  }

/* <Main function> */
int
main()
  {
  int min;
  float hour;

  min = value_input();
  hour = conv_minute(min);
  print_hour(min,hour);
  
  getchar();
  return(0);
  }
