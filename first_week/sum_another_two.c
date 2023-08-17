#include <stdio.h>

int main() {

    int num_a, num_b, num_c;
    scanf("%i\n", &num_a);
    scanf("%i\n", &num_b);
    scanf("%i\n", &num_c);
    int resultado = (num_a + num_b == num_c || num_a + num_c == num_b || num_b + num_c == num_a )? 1 : 0;
    printf("Resposta: ");
    printf("%i", resultado);

    return 0;
}
