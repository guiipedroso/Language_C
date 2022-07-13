/*
  Title: Choose the time  
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Prototype> */
long int num1(int n_hours, char type);
long int num2(int n_hours, char type);
long int num3(int n_hours, char type);

/* <Main function> */
int
main()
  {
  long int v1, v2, v3;
  
  puts("Using IF ELSE ");
   
  v1 = num1(3, 'h');
  v2 = num1(3, 'm');
  v3 = num1(3, 's');
  
  printf("Hours : %ld\n", v1);
  printf("Minutes: %ld\n", v2);
  printf("Seconds: %ld\n", v3);
 
  puts("");
  puts("USING SWITCH ");
  v1 = num2(3, 'h');
  v2 = num2(3, 'm');
  v3 = num2(3, 's');

  printf("Hours : %ld\n", v1);
  printf("Minutes: %ld\n", v2);
  printf("Seconds: %ld\n", v3);

  puts("");
  puts("USING SWITCH WITHOUT BREAK");
  v1 = num3(3, 'h');
  v2 = num3(3, 'm');
  v3 = num3(3, 's');

  printf("Hours : %ld\n", v1);
  printf("Minutes: %ld\n", v2);
  printf("Seconds: %ld\n", v3);

  getchar();
  return(0);
  } /* <end main> */

long int
num1(int n_hours, char type)
  {
  if(type == 'h')
    {
    return(n_hours);
    }
  else
    {
    if(type == 'm')
      {
      return(n_hours*60);
      }
    else
      {
      if(type == 's')
        {
	return(n_hours*3600);
	}
      else
        {
	printf("Type isn't correct\n");
	}
      }
    }
  } /* <end> */

long int
num2(int n_hours, char type)
  {
  switch(type)
    {
    case 'h':
    case 'H':
      return(n_hours);	    
    case 'm':
    case 'M':
      return(n_hours*60);    
    case 's':
    case 'S':
      return(n_hours*3600);
    default:
      printf("Not exists option for %c\n", type);
    }
  }

long int num3(int n_hours, char type)
  {
  int aux = 1;	  
  switch(type)
    {
    case 's':
    case 'S':
      aux*=60;
    case 'm':
    case 'M':
      aux*=60;
    case 'H':
    case 'h':
      return(n_hours*aux);
    default:
      printf("Not exists option for %c\n", type);
    }
  }

