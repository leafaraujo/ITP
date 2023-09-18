#include <stdio.h>
#include <stdlib.h>

int maior(int lista[], int alturas){
    int verificador = 30, maior_altura = 0;
    int contador = 0;
    int binario = 0;
    while(binario == 0){
        for(int i = 0; i < alturas; i++){
            if(lista[i] > maior_altura && lista[i] < verificador){
                maior_altura = lista[i];
            }
        }
        verificador = maior_altura;
        for(int j = 0; j < alturas; j++){
            if(lista[j] == maior_altura){
                contador += 1;
            }
        }
        if(contador >= 2){
            binario = 1;
        }
    }
    return maior_altura;
}

int distancia(int alturas){
    int *alturas_terrenos = (int *)malloc(alturas * sizeof(int));
    int terreno, j, maior_altura, metros = 0;
    for(int i = 0; i < alturas; i++){
        scanf("%d", &terreno);
        alturas_terrenos[i] = terreno;
        }
    maior_altura = maior(alturas_terrenos, alturas);
    
      int primeiro_indice = -1;

    for(int i = 0; i < alturas; i++) {
        if(alturas_terrenos[i] == maior_altura){
            if (primeiro_indice == -1) {
                primeiro_indice = i; 
            } else {
                metros += (i - primeiro_indice - 1); 
                primeiro_indice = i; 
            }
        }
    }
    return metros;

}

int main(){

    int terrenos, metros;
    scanf("%d", &terrenos);
    metros = distancia(terrenos);
    printf("%d", metros);
    
    return 0;
}
