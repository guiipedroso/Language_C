  #include <stdio.h>
  #include "operations.h"

  int main()
    {
    int v1, v2, result;
    char ch;
    printf("Choose one of the math operations (+,-,*,/): ");
    ch = getchar();
    printf("Enter 2 numbers: ");
    scanf("%d %d", &v1, &v2);

    switch(ch)
      {
      case '+':
      result = addition(v1,v2);
      break;
      case '-':
      result = subtracion(v1,v2);
      break;
      case '*':
      result = multiplication(v1,v2);
      break;
      case '/':
      result = division(v1,v2);
      break;
      }

    printf("Result: %d", result);

    printf("\n");
    return(0);
    }
