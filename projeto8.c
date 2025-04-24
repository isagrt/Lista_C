

//Mini calculadora, um programa que peça dois números e um operador (+,-,* ou /)


#include <stdio.h>
#include <ctype.h>

int main() {
  int n1, n2, result;
  char operador;

  printf("Digite seu primeiro valor: ");
  scanf("%d", &n1);

  printf("Coloque o operador de sua operação matemática: ");
  scanf(" %c", &operador);

  printf("Agora, digite o segundo valor: ");
  scanf("%d", &n2);

  switch(operador){

    case '+': printf("= %d", result = n1+n2); break;
    case '-': printf("= %d", result = n1-n2); break;
    case '/': printf("= %d", result = n1/n2); break;
    case '*': printf("= %d", result = n1*n2); break;
    default: printf("Operador inválido!");
  }
}

