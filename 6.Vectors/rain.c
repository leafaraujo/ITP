#include <stdio.h>
#include <stdlib.h>

int maior(int *dias_chuvosos,int quantidade_meses){
    int maior = 0;
    for(int i = 0; i < quantidade_meses ; i++){
        if(dias_chuvosos[i] > maior){
            maior = dias_chuvosos[i];
        }
    }
    return maior;
}


void rain (int meses){

    int quantidade_dias;
    int *dias_de_chuva = (int *)malloc(meses * sizeof(int));
    for(int i = 0; i < meses ; i++){
        scanf("%d", &quantidade_dias);
        dias_de_chuva[i] = quantidade_dias;
    }
    int maior_dias = maior(dias_de_chuva, meses);
    for(int i = 0; i < meses ; i++){
        if(dias_de_chuva[i] == maior_dias){
            printf("%d ", (i + 1));
        }
    }
    printf("%d", maior_dias);
}
int main(){
    int quantidade_meses;
    scanf("%d", &quantidade_meses);
    rain(quantidade_meses);
    
    return 0;
}
