

//Peça uma letra e diga se é vogal ou consoante.
//2. converte uma letra em maiuscula.


#include <stdio.h>
#include <ctype.h>

int main() {
  char letter, upperLetter;

  printf("Digite uma letra: ");
  scanf("%c", &letter);

  upperLetter = toupper(letter);

  if (upperLetter == 'A' || upperLetter == 'E' || upperLetter == 'I' || upperLetter == 'O' || upperLetter == 'U') {
     printf("A letra %c é uma vogal!", upperLetter );
  }
  else{
    printf ("A letra %c uma consoante", upperLetter);
  }
}

