/*
  Title: Business (Array)  
  Author: Guilherme Pedroso 
  Date: July 2022
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Macros> */
#define N 5

/* <Prototypes> */
char print(float total);
char print2(float total);

/* <Main function> */
int
main()
  {
  int amount[N];
  float value[N];
  float total = 0.0, max_buy;
  char op;
   
  printf("Enter a maximum amount of contribution: ");
  scanf("%f", &max_buy);

  for(int i = 0; i < N; i++)
    {
    printf("Enter the price: ");
    scanf("%f", &value[i]);
    printf("Enter the amount: ");
    scanf("%d", &amount[i]);
    total += (value[i]*amount[i]);
    
    if((total > max_buy)&&(i == (N-1)))
    {
    op = print(total);
    if((op == 'Y')||(op == 'y'))
      {
      i = -1;
      total = 0;
      }
    else
      {
      return(0);
      }
    }
    if((total <= max_buy)&&(i == (N-1)))
      {	      
      op = print2(total);
      if((op == 'Y')||(op == 'y'))
        {
        i = -1;
	total = 0;
        }
      else
        {
        return(0);
        }
      } 
    }
  
  getchar();
  return(0);
  } /* <end main> */

char
print(float total)
  {
  char ch;
  printf("Total = %.2f\n", total);
  printf("Insufficient contribution!\n");
  printf("Do you wish to continue? Y or N?\n");
  scanf(" %c", &ch);
  return(ch);
  }

char
print2(float total)
  {
  char ch;
  printf("Total = %.2f\n", total);
  printf("Sufficient contribution!\n");
  printf("Do you wish to continue? Y or N?\n");
  scanf(" %c", &ch);
  return(ch);
  }
