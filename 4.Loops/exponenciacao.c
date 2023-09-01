#include <stdio.h>

int main(){

    int number_n, number_pow, factor, verificador;
    scanf("%d %d", &number_n, &number_pow);
    verificador = number_n;
    if(number_n > number_pow){
        while(number_n != number_pow && number_n % number_pow == 0){

            number_n = number_n / number_pow;
            factor += 1;
        }
    }
    
    if(number_n * factor == verificador || number_n == number_pow || number_n == 1){

        printf("sim");

    }
    else{

        printf("não");
    }

    return 0;
}
