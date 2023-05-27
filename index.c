#include <stdio.h>

int main(void) {
  
  system ("clear");
  
  int numero, SP, SI, i;

  SP = 0;                                   // zerando as variaveis pra não dar ruim
  SI = 0;

  for (int i = 1; i <= 10; i++) {           // para i = 1; para se i for 10; i = i + 1
    
    printf("Digite dez números:");
    scanf("%d", &numero);

    if (numero % 2 == 0) {                  // se o numero é par
      SP += numero;                         // += funciona com "SP = SP + N"
    } else {
      SI += numero;
    }
  }

  printf("Soma dos pares: %d\n", SP);
  printf("Soma dos ímpares: %d\n", SI);

  return 0;
}
