#include <stdio.h>

int main() {
    
    int number;
    printf("Digite um número que seja múltiplo de três, mas não de 5: ");
    scanf("%i", &number);
    int resultado = (number > 0 && number % 3 == 0 && number % 5 != 0)? 1 : 0;
    printf("%d\n", resultado);
  
    return 0;
}