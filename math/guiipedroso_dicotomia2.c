/*
  Title: Trabalho de Calculo Numerico
  Discente: Guilherme Pedroso
 
*/

/* 
 
 * 2- Usando metodo da dicotomia encontre a raiz da função f(x) = ((e^-x)*1(x-1/2)) precisao 4 casas decimais 
 
 * f(x) = ((e^-x)*(x-1/2)) 
 
 * intervalo n definido

*/

/* <Libraries> */
#include <stdio.h>
#include <math.h>


/* <Verificar se a função possui raiz> */
float
raizfun(float xa, float xb, float precisao)
  {
    float xa_intervalo, xb_intervalo,fxa_intervalo,fxb_intervalo;
    int resp = 0;

    /* Verifica intervalo f(a).f(b)<0 (teorema de Bolzano) */   
    xa_intervalo = xa;
    xb_intervalo = xb;
    /* definir a f intrvalo para realizar Bolzano */
    fxa_intervalo = (exp((-xa_intervalo)) * ((xa_intervalo-1)/2));
    fxb_intervalo = (exp((-xb_intervalo)) * ((xb_intervalo-1)/2));

    if ((fxa_intervalo*fxb_intervalo) < 0)
      {
      printf("Existe pelo menos uma raiz dentro desse intervalo\n");
      getchar();
      }
    else
      {
      printf("Pode nao existir uma raiz dentro desse intervalo, altere o intervalo:\n OBS: intervalo valido = f(comeco_intervalo)*f(final_intervalo) > 0\n");
      getchar();
      }

    /* Encontrar numero de interações até chegar na raiz, caso necessario o valor pode ser alterado, dependendo do nuemro de interacoes */
    float k;
    k=((log(xb-xa)-log(precisao))/log(2));
    printf("Numero de interacoes: %.2f\n\n",k);
  }

float
dicotomia(float xa, float xb, float precisao)
  {
     
    float xc, xc_anterior, f_xa, f_xb, f_xc, xa_inicial, xb_inicial,xa_intervalo, xb_intervalo,fxa_intervalo,fxb_intervalo;

    xa_inicial = xa;
    xb_inicial = xb;
  
    int iteracoes = 0;

    xc_anterior = xb;
    xc = xa;

    printf("i, xa, xb, xc, f(xa), f(xb), f(xc), f_xa * f_xc < 0.0, f_xb * f_xc < 0.0, |xc - xc_anterior|, precisao\n");
    while(fabs(xc - xc_anterior) > precisao)  
      {
      iteracoes++;

      xc_anterior = xc;

      xc = (xa + xb) / 2.0;
      f_xa = (exp((-xa)) * ((xa-1)/2));
      f_xb = (exp((-xb)) * ((xb-1)/2));
      f_xc = (exp((-xc)) * ((xc-1)/2));
   
      printf("%d, %f, %f, %f, %f, %f, %f, %d, %d, %f, %f\n", iteracoes, xa, xb, xc, f_xa, f_xb, f_xc, ( f_xa * f_xc < 0.0 ), ( f_xb * f_xc < 0.0 ), fabs(xc - xc_anterior), precisao);

    if( f_xa * f_xc < 0.0)
      {
      xb = xc;
      }
    else
      {
      if( f_xb * f_xc < 0.0)
        {
        xa = xc;
        }
      }
    }

  return(xc);
  }

int 
menu()
  {
  int ch;
   printf("\n------------  DICOTOMIA -> f(x) = ((e^-x)(x-1/2)) | default: intervalo ]0.5 ; 1.1[, precisao 0.0001--------------");
   printf("\n\n1- Entrar com o intervalo e precisao\n");
   printf("2- Usar intervalo e precisao default\n");
   printf("3- Realizar dicotomia\n");
   printf("0- Sair\n");
   scanf("%d", &ch);
   return(ch);
  }

int 
main()
  {
  float inter_a, inter_b, precisao;
  float raiz;
  int ch;
    do
      {
      ch=menu();
      
        switch(ch)
          {
          case 1:
	    {
            printf("\nEntre com os intervalos e precisao: ");
            scanf ("%f%f%f", &inter_a, &inter_b, &precisao);
            printf("\n");
            raizfun(inter_a,inter_b, precisao);
            break;
	    }
          case 2:
	    {
	    raiz = dicotomia(0.5, 1.1, 0.0001);
            printf("\nraiz = %f\n \n", raiz);
            ch = 0;
            break;
	    }
          case 3 :
	    {
            raiz = dicotomia(inter_a, inter_b, precisao);
            printf("\nraiz = %f\n \n", raiz);
	    }
          } 
       } while (ch != 0);
  return(0);
  }
