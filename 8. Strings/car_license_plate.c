#include <stdio.h>
#include <string.h>

int main(){

    char placa[20] = {0}, upper_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", numbers[]= "1234567890";
    int tamanho_vetor, bombas_adjacentes = 0, i, j, counter = 0;

    fgets(placa, 19, stdin);
    tamanho_vetor = strlen(placa);
    
    if(tamanho_vetor != 8 || placa[3] != '-'){
        printf("não");
        return 0;
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 26; j++){
            if(placa[i] == upper_letters[j]){
                counter ++;
                break;
            }
        }
    }

    if(counter != 3){
        printf("não");
        return 0;
    }

    counter = 0;

    for(i = 4; i < 8; i++){
        for(j = 0; j < 10; j++){
            if(placa[i] == numbers[j]){
                counter ++;
                break;
            }
        }
    }

    if(counter != 4){
        printf("não");
        return 0;
    }

    printf("sim");
    return 0;
    }
