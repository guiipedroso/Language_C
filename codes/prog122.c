#include <stdio.h>

int
main()
  {
  const int diaria = 15;
  short int bombons = 15;
  int dia;
  int camara = 15;

  printf("Recebe os dias: ");
  scanf("%d", &dia);

  for(int i = 1; i < dia; i++)
    {
    if(dia == 1)    
      {
      continue;
      }
    else
      {
      bombons = bombons + 15;
      camara = bombons + camara;
      }
    }

  printf("Dia %d tem %d bombons\n", dia, camara);

  return(0);
  }
