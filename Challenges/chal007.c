#include <stdio.h>
#include <time.h>

int
main()
  {
  srand((unsigned)time(NULL));

  int aleatorio = rand() % 10;

  printf("%d", aleatorio);
  
  return(0);
  }
