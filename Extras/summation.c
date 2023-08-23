#include <stdio.h>

int main(){

    int summation, number;
    summation = 0;
    
    printf("Digite os números do somatório");
    printf("(Lembrando que eles tem que ser maiores que 0!):")
    scanf("\n%d", &number);
    while(number > 0){
        
        summation += number;
        scanf("\n%d", &number);
    }

    printf("\nO resultado desse somatório foi: %d", summation);

    return 0;
}
