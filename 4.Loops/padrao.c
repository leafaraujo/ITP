#include <stdio.h>

int main(){

    int number, iterador, counter, i, j;
    scanf("%d", &number);
    counter = 1;
    iterador = number;
    for(i = 1; i <= number; i++){
        for(j = counter; j <= iterador; j++){
            printf("%d ", j);
        }
        counter += 1;
        iterador += 1;
        printf("\n");
    }
}
