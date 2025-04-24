

//Mini calculadora, um programa que peça dois números e um operador (+,-,* ou /)


#include <stdio.h>
#include <ctype.h>

int main() {
  float n1, n2, result;
  char operador;

  printf("Digite seu primeiro valor: ");
  scanf("%f", &n1);

  printf("Coloque o operador de sua operação matemática: ");
  scanf(" %c", &operador);
  
  printf("Agora, digite o segundo valor: ");
  scanf("%f", &n2);
    
  if(operador == '+'){
    result = n1 + n2;
    printf("= %.2f", result);
  }

  else if (operador == '-'){
    result = n1 - n2;
    printf("= %.2f", result);
  }

  else if ( operador == '*'){
    result = n1 * n2;
    printf("= %.2f", result);
  }

  else{
    result = n1 / n2;
    printf("= %.2f", result);
  }
}

