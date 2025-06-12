#include <ctype.h>
#include <stdio.h>

int main() {
  float temperatura[7];

  for(int i = 0; i < 7; i++){
    printf("Digite o valor da temperatura do dia %d:", i +1);
    scanf("%f", &temperatura[i]);
  }
  for(int i = 0; i < 7; i++){
    printf("Temperatura do dia %d: %f", i + 1, temperatura[i])
  } 
}
