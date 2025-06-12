#include <ctype.h>
#include <stdio.h>

int main2() {
  float notas[5];
  int soma = 0;

  for (int i = 0; i < 5; i++) {
    printf("Digite a nota %d: ", i + 1);
    scanf("%f", &notas[i]);
  }
  
  for (int i = 0; i < 5; i++) {
    printf("Nota %d: %.2f\n", i + 1, notas[i]);
    soma = soma + notas[1];
  }
  printf("Media das notas: %d\n", soma/5);
}
