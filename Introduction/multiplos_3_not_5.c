#include <stdio.h>

int main() {
    
    int number;
    printf("Resposta: ");
    scanf("%i", &number);
    int resultado = (number > 0 && number % 3 == 0 && number % 5 != 0)? 1 : 0;
    printf("%d\n", resultado);
  
    return 0;
}
