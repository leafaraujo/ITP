#include <stdio.h>

int main(){

    int quantidade_trilhas, avaliacao, resultado ;
    scanf("%d", &quantidade_trilhas);
    if(0 > quantidade_trilhas){

        printf("Valor inválido! Vou encerrar o programa!");
    }
    else if(0 <= quantidade_trilhas && quantidade_trilhas < 5){

        printf("Iniciante");
    }
    else if( 5 <= quantidade_trilhas && quantidade_trilhas < 20){

        scanf("%d", &avaliacao);
        switch(avaliacao)
        {
            case 0: printf("Iniciante"); break;
            case 1: printf("Intermediário"); break;
        }   
    }
    else{

        scanf("%d", &avaliacao);
        switch(avaliacao)
        {
            case 0: printf("Intermediário"); break;
            case 1: printf("Avançado"); break;
        }
    }

    return 0;
}
