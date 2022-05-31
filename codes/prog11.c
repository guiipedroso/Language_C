/*
  Title: Diamond
  Author: Guilherme Pedroso
  Date: May 2022
  Updated: -- 

*/

/* Libraries */
#include <stdio.h>

int
main()
  {
  float p_diagonal, m_diagonal;
  double area;
  
  printf("Diagonal 1: ");
  scanf("%f", &p_diagonal);
  printf("Diagonal 2: ");
  scanf("%f", &m_diagonal);
  area = (p_diagonal * m_diagonal)/2;

  printf("Area of diamond: %.14lf\n", area);
  getchar();  
  return(0);
  }
