#include <stdio.h>
#include <stdlib.h>

void At1() {
  int numero;

  printf("Digite um n%cmero: ", 163);
  scanf("%d", &numero);

  if (numero > 10) {
    printf("Maior do que 10.");
  }

  else {
    printf("Cai fora.");
  }
}

void At2() {
  int numero;

  printf("Digite um n%cmero: ", 163);
  scanf("%d", &numero);

  if (numero % 2 == 0) {
    printf("N%cmero par.", 163);
  }

  else {
    printf("N%cmero %cmpar.", 163, 161);
  }
  
}

int main(void){
  At1();
  At2();
}
/*para acentuar as letras no compilador(Notepad++, etc) com ASCII, utilize #include <stdlib.h> no começo do código, depois do <stdio.h>, e procure o caractere acentuado que você deseja em uma tabela ASCII.
Exemplos mais comuns: é= 130, à= 133, ç= 135;
á= 160, í= 161, ó= 162, ú= 163, Á= 181, â= 131.
Exemplo de código:
printf("O n%cmero digitado multiplicado por 7 %c igual a %d", 163, 130);
*/
