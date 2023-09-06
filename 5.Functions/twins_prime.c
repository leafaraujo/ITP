#include <stdio.h>

int is_prime(int number){
    int i;
    /*O primeiro bloco de verificação serve para verificar se o número é igual a 2, e se ele é menor que 1, ou se é par, tendo em vista que o único par dos primos é o 2*/
    if(number == 2){
        return 1;
    }
    else if(number <= 1 || number % 2 == 0){
        return 0;
    }
    for(i=3; i * i <= number; i +=2){
        if(number % i == 0){
            return 0;
        }
   }
    return 1;
}

twin_prime(int number){
    if(is_prime(number) && is_prime(number + 2)){
        return 1;
    }
    return 0;
}

int main(){

    int number, verification;
    scanf("%d", &number);
    verification = twin_prime(number);
    if(verification == 0){
        printf("Numero nao forma par de gemeos");
    }
    else{
        printf("Numero forma par de gemeos");
    }
    return 0;
}
