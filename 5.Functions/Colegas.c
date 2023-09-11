#include <stdio.h>
#include <math.h>

int sum(int number){
    int divisores = 0;
    for(int i = 1; i <= number; i++){
        if(number % i == 0){
            divisores += i;
        }
    }
    return (divisores - number);
}


int colleagues(int num_a, int num_b){
    int verificacao_1 = sum(num_a) - num_b;
    int verificacao_2 = sum(num_b) - num_a;
    if(abs(verificacao_1) <= 2 && abs(verificacao_2) <= 2 ){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int number_a, number_b, colegas;
    scanf("%d %d", &number_a, &number_b);
    colegas = colleagues(number_a, number_b);
    if(colegas == 1)
        printf("S");
    else{
        printf("N");
    }

    return 0;
}
