#include <stdio.h>

void prime(int x);

int
main()
  {
  int x, cont = 1;
  register int i = 2;
  printf("Entre a number: ");
  scanf("%d", &x);

  for(i; i <= x; i++)
    {
    if(x % i == 0) 
      {
      cont++;
      }
    }
  
  prime(cont);
  
  return(0);
  }

void
prime(int contt)
 {
 if(contt == 2)
   {
   printf("Is prime\n");
   }
 else 
   {
   printf("Isn't prime\n");
   }
 }

