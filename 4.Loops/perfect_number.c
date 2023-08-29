#include <stdio.h>

int main() {

    int number_a, soma_divisores, i;
    soma_divisores = 0;
    scanf("%d", &number_a);
    
    for(i = 1; i <= number_a - 1; i++){

        if(number_a % i ==0){
            soma_divisores += i;
        }
    }
    if(soma_divisores == number_a){

        printf("Perfeito");
    }
    else{

        printf("Não perfeito");
    }
    return 0;
}
