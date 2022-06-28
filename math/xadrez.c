#include <stdio.h>

void
xadrez()
{
int matriz[8][8];

for(int i = 0; i < 8; i++)
  {
  for(int j = 0; j < 8; j++)
    {
    if((i == 1)||(i == 6))
      {
      matriz[i][j] = 80;
      }
    else
      {
      if((i > 1)&&(i < 6))
        {
        matriz[i][j] = 32;
        }
      else
        {
        switch(j)
          {
          case 0:
          case 7:
            {
            matriz[i][j] = 84;
            break;
            }
          case 1:
          case 6:
            {
            matriz[i][j] = 67;
            break;
            }
          case 2:
          case 5:
            {
            matriz[i][j] = 66;
            break;
            }
          case 3:
            {
            if(i == 0)
              {
              matriz[i][j] = 75;
              }
            else
              {
              matriz[i][j] = 81;
              }
            break;
            }
        case 4:
          {
          if(i != 0)
            {
            matriz[i][j] = 75;
            }
          else
            {
            matriz[i][j] = 81;
            }
          break;
          }
      }
     }
    }
   }
 }

for(int i = 0; i < 8; i++)
 {
  for(int j = 0; j < 8; j++)
  {
    printf("%4c", (char)matriz[i][j]);
  }
    printf("\n");
 }
}

int
main()
{
  xadrez();
  return(0);
}
