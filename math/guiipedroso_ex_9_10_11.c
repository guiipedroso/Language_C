/*
  Title: Trabalho de Calculo Numerico
  Discente: Guilherme Pedroso de Lima
  Docente: Eduardo Hiroshi Nakamura
  Turma: Engenharia de Computacao 5
 
*/

/* <Libraries> */
#include <stdio.h>
#include <math.h>

/* <MENU> */
int 
menu()
  {
  int x;
  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf("+ [MENU] \t\t\t\t\t     +"); 
  printf("\n+ \t\t\t\t\t\t     +");
  printf("\n+ 1 - Notacao no formato SPF e exemplos \t     +");
  printf("\n+ 2 - Erro Absoluto e Erro relativo \t\t     +");
  printf("\n+ 3 - Conversao do numero 13,375 para IEEE754\t     +");
  printf("\n+ 0 - Sair                                   \t     +");
  printf("\n+\t\t\t\t\t\t     +\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
 
  printf("\n\nEscolha uma opcao valida: ");
  scanf("%d", &x);
  return x;
  }


/* <print> */ 
void
print()
  {
  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf("+\t\t\t\t\t\t     +\n+ SPF (Base, numero de digitos a direita da virgula, + \n+ expoente minimo, expoente maximo)\t\t     +");
  printf("\n+ Exemplo: SPF (10,2,-5,5)\t\t\t     +");
  printf("\n+ x = 0,10 x 10e-5 = 0,00001\t\t\t     +");
  printf("\n+ x = 0,99 x 10e5 = 99000\t\t\t     +");
  printf("\n+ 0,00000025 = 0,25 x 10e-6 (Underflow) \t     +");
  printf("\n+ 31415926,535 = 0,31415926535 x 10e8 (Overflow)     +");
  printf("\n+\t\t\t\t\t\t     +\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  putchar('\n');
  }

void
print2()
  {
  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf("+\t\t\t\t\t\t     +\n+ O Erro absoluto eh o valor real do erro \t     + \n+ O Erro relativo eh o valor percentual do erro\t     +");
  printf("\n+\t\t\t\t\t\t     +\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  putchar('\n');
  }

void
print3()
  {
  float simples = 13.375;
  float inteiro;
  float fracao;
  float mantissa;
  int expoente;

  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
    
  printf("Padrao = %f\n", simples);
  fracao = modff(simples, &inteiro);
  printf("Parte inteira = %f e fracionaria = %f\n", inteiro, fracao);
  printf("Cientifica = %e\n", simples);

  printf("%3f ==> 01000001010101100000000000000000\n", simples);

  printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  putchar('\n');
  }


/* <main function> */
int
main()
  {
  int op;
  
  do
    {
      op = menu();
      switch(op)
        {
	  case 0:
	  {
	  printf("\nObrigado por testar!");
	  putchar('\n');
	  break;
	  }	  
	  case 1:
          {
	  print();
	  break;
	  }
        case 2:
	  {
	  putchar('\n');
	  print2(); 
	  break;
	  }
        case 3: 
	  {
	  print3();   
	  break;
	  }
	default:
	  {
	  printf("\nOpcao Invalida\n\n");
	  }
	}
    } while((op < 0 )||(op > 0));


  getchar();
  return(0);
  }
