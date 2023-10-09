#include <stdio.h>
#include <string.h>

int main(){

    char campo_minado[20] = {0};
    int indice_verificar = 0, tamanho_vetor, bombas_adjacentes = 0;

    scanf("%[^' ']", campo_minado);
    scanf("%d", &indice_verificar);
    tamanho_vetor = strlen(campo_minado) - 2;

    if(campo_minado[indice_verificar] == '*'){
        printf("bum!");
    }
    else{
        if(indice_verificar == 0){
            if(campo_minado[indice_verificar + 1] == '*'){
                bombas_adjacentes ++;
            }
        }
        else if(indice_verificar == tamanho_vetor - 1){
            if(campo_minado[indice_verificar - 1] == '*'){
                bombas_adjacentes ++;
            }
        }
        else{
            if(campo_minado[indice_verificar - 1] == '*'){
                bombas_adjacentes ++;
            }
            if(campo_minado[indice_verificar + 1] == '*'){
                bombas_adjacentes ++;
            }
        }
    printf("%d", bombas_adjacentes);
    } 
        
    return 0;
    }
