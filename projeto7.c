

//Mini calculadora, um programa que peça dois números e um operador (+,-,* ou /)


#include <stdio.h>
#include <ctype.h>

int main() {
  int number;

  printf("Informe o número do mês que voce deseja: ");
  scanf("%d", &number);
  
  switch(number){

    case 1: printf("Verão"); break;
    case 2: printf("Verão"); break;
    case 3: printf("Outono"); break;
    case 4: printf("Outono"); break;
    case 5: printf("Outono"); break;
    case 6: printf("Inverno"); break;
    case 7: printf("Inverno"); break;
    case 8: printf("Inverno"); break;
    case 9: printf("Primavera"); break;
    case 10: printf("Primavera"); break;
    case 11: printf("Primavera"); break;
    case 12: printf("Verão"); break;
    default: printf("Numero inválido");
  }
}

