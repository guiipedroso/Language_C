/*
  Title: Age II
  Author: Guilherme Pedroso
  Date: June
  Updated: --

*/

/* <Libraries> */
#include <stdio.h>

/* <Main function> */
int
main()
{
  int age;
  char car;
	
  printf("Enter with your age: ");
  scanf("%d", &age);
  printf("Do you have a car? Y or N? ");
  scanf(" %c", &car);
  
  if((age >= 18 && age <= 50)&&(car == 'n' || car == 'N'))
    {
    printf("Received U$700\n");
    }
  else
    {
    printf("Received U$300\n");
    }

  return(0);
} /* <End main> */
