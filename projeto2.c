

//1.Peça um caractere e mostre o código w mostre o código ASCII correspondente.
//2. Peça duas letras e diga qual vem primeiro no alfabeto.
//3. Peça uma letra e diga se ela é maiúscula ou minúscula.
//4. Inverta a letra digitada: se fr msiuscula transforma em maiuscula e se for miniscula tranforma em maiuscula.


#include <stdio.h>
#include <ctype.h>

int main() {
  char letter1, letter2;

  printf("Digite sua primeira letra: ");
  scanf("%c", &letter1); 

  printf("Digite sua segunda letra: ");
  scanf(" %c", &letter2); 

  if (letter1 > letter2){
   printf("A letra %c vem primeiro", letter1);
  }
  else {
    printf ("A letra %c vem primeiro", letter2);
  }
  
}

