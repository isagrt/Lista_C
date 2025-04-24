

//O usuario informa a nota entre A e F


#include <stdio.h>
#include <ctype.h>

int main() {
  int number;
  int n1, n2, result;

  printf("********************");
  printf("\n* 1. Home Page     * \n* 2. Calculadora   * \n* 3. Log out       *\n");
  printf("********************");
  scanf("%d", &number);

  switch(number){
    case 1: printf("Bem vinde ao aplicativo <3!!"); break;
    case 2: 
    printf("Digite o 1° valor:");
    scanf("%d", &n1);
    printf("Digite o 2° valor:");
    scanf("%d", &n2);
    printf("= %d", result = n1+n2);
    break;
    case 3: printf("Programa encerrado."); break;
    default: printf("Valor inválido");
  }
  
}

