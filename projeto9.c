

//O usuario informa a nota entre A e F


#include <stdio.h>
#include <ctype.h>

int main() {
  char letter;

  printf("Informe a sua nota entre A e F: ");
  scanf(" %c", &letter);

  switch(letter){

    case 'A': printf("Exelente, arrasa!!"); break;
    case 'B': printf("Bom, continue assim :)"); break;
    case 'C': printf("Rgular, mas tente um pouco mais"); break;
    case 'D': printf("Ruim, poxa vei :/"); break;
    case 'E': printf("Péssimooo, melhore imediatamente"); break;
    case 'F': printf("Reprovou, tonhooo!!"); break;
    case 'a': printf("Exelente, arrasa!!"); break;
    case 'b': printf("Bom, continue assim :)"); break;
    case 'c': printf("Rgular, mas tente um pouco mais"); break;
    case 'd': printf("Ruim, poxa vei :/"); break;
    case 'e': printf("Péssimooo, melhore imediatamente"); break;
    case 'f': printf("Reprovou, tonhooo!!"); break;
    default: printf("Letra inválida");
  }
  
}

