#include <ctype.h>
#include <stdio.h>

int main() {
  float total = 0;
  float maiorFaturamento;
  float faturamento[7];

  for(int i = 0; i < 7; i ++){
    printf("Coloque o faturamento do dia %d:", i+1);
    scanf("%f", &faturamento[i]);
  }
  for(int i = 0; i < 7; i ++){
    printf("O faturamento do dia %d foi de: %f", i+1, faturamento[i]);
    total = total + faturamento[i];

    if(maiorFaturamento[i]>maiorFaturamento){
      maiorFaturamento = faturamento[i];
    }
  }

  printf ("O faturamento total do dia foi: %f", total);
  printf ("O maior faturamento foi: %f", maiorFaturamento);
}

