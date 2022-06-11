/*
  Title: Trabalho de Calculo Numerico
  Discente: Guilherme Pedroso
 
*/

/*
 
 * 3- Usando metodo da newtonraphson encontre a raiz da função f(x)=x²-x+sin(5x) precisao 4 casas decimais 
 
 * f(x)= x² - x + sin(5x) --- derivada ->  f(x) = 20x³ -cos(x)

*/

/* <Libraries> */
#include <stdio.h> 
#include <math.h> 

float
f_x(float x)
  {
  float y;
  y = 5*pow(x,4)-sin(x);
  return(y);
  } 

float
derivada_f_x(float x)
  {
  float y;
  y = 20*pow(x,3) - cos(x);
  return(y);
  }

float
NewtonRaphson(float x0, float precisao)
  {
  float x1, x1_anterior, valor_f_x, valor_derivada_f_x;

  int iteracoes = 0;

  x1_anterior = 2 * precisao;

  printf("i, xi, xi+1, precisao\n");
  while( fabs(x0 - x1_anterior) > precisao )
    {
    x1_anterior = x0;
    valor_f_x = f_x(x0);
    valor_derivada_f_x = derivada_f_x(x0);
    x1 = x0 - ( valor_f_x/valor_derivada_f_x );
    x0 = x1;

    iteracoes++;
    printf("%d, %f, %f, %f\n", iteracoes, x1_anterior, x1, precisao);
    }
  return(x1);
  }
int 
menu()
{
  int op;
  printf("\n------------  Newtonraphson ->  f(x) = 5x⁴ - sen(x) | default: (x0 = 0.5, precisao = 0.0001) --------------");
  printf("\n\n1- Entrar com x0 e precisao\n");
  printf("2- Usar x0 e precisao default\n");
  printf("3- Realizar newtonraphson\n");
  printf("0- Sair\n");
  scanf("%d", &op);
  return op;
}

int 
main()
  {
  float x0, precisao;
  float raiz;
  int op;
  do
    {
      op=menu();
      
      switch (op)
        {
          case 1:
	    {
	    printf("\nEntre com x0 e precisao: ");
            scanf ("%f%f", &x0, &precisao);
            printf("\n");
            derivada_f_x(x0);
            f_x(x0);
            break;
	    }
          case 2:
	    {
	    raiz = NewtonRaphson(0.5, 0.0001);
            printf("\n\nraiz = %g\n \n", raiz);
            op = 0;
            break;
	    }
          case 3 :
            {
	    raiz = NewtonRaphson(x0, precisao);
            printf("\nraiz = %g\n \n", raiz);
	    }        
        } 
    } while (op != 0);
  return(0);
} /* <End main> */
