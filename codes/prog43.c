/*
  Title: Switch without break 
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
  int hours;
  long igual;
  char type;

  printf("Hours: ");
  scanf("%d", &hours);
  printf("What is format (m/s/d): ");
  scanf(" %c", &type);

  igual = hours;

  switch(type)
    {
    case 'd':
    case 'D':
      igual *= 10;
    case 's':
    case 'S': 
      igual *= 60;
    case 'm':
    case 'M': 
      igual *= 60;
    }
  printf("%dh ==> %ld%c\n", hours, igual, type);
    
  getchar();
  return(0);
  }
