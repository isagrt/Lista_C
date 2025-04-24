

//Mini calculadora, um programa que peça dois números e um operador (+,-,* ou /)


#include <stdio.h>
#include <ctype.h>

int main() {
  int number;

  printf("Informe o número do mês que voce deseja: ");
  scanf("%d", &number);
  
  if(number == 1 || number == 2|| number == 12){
    printf("Você esta no verão!! Beba bastante água e uso o protetor solar<3");
  }

  else if (number == 3 || number == 4|| number ==5){
    printf("Você está no outono!! Se prepare para dias mais curtos e noites mais longas:)");
  }

  else if (number == 6 || number == 7|| number ==8){
    printf("Você está no inverno!! Use manteiga de cacau:)");
  }

  else if (number == 9 || number == 10 || number == 11){
    printf("Você está na primavera!! Flores <3");
  }

  else{
    printf("O valor que você digitou é invalido, dããr!");
  }
}

