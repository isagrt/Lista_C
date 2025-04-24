//1.Peça um caractere e mostre o código w mostre o código ASCII correspondente.
//2. Peça duas letras e diga qual vem primeiro no alfabeto.
//3. Peça uma letra e diga se ela é maiúscula ou minúscula.
//4. Inverta a letra digitada: se fr msiuscula transforma em maiuscula e se for miniscula tranforma em maiuscula.


#include <stdio.h>
#include <ctype.h>

int main() {
  char letter;

  printf("Digite uma letra: ");
  scanf("%c", &letter);
  
  if(letter == toupper(letter)){
    printf("A letra é maiúscula");
  }
  else{
    printf("A letra é minúscula");
  }
  
}

