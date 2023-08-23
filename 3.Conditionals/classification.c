#include <stdio.h>

int main(){

    int pontos, partidas_restantes, pontos_min;
    scanf("%d %d %d", &pontos, &partidas_restantes, &pontos_min);
    if(pontos >= pontos_min)
    {
        printf("O time já está classificado");
    }
    else if(pontos + (3 * partidas_restantes) >= pontos_min)
    {
        printf("É possível se classificar");
    }
    else
    {
        printf("Não é possível se classificar");
    }

    return 0;
}
