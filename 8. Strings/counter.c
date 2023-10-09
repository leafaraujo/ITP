#include <stdio.h>

char to_lower(char letra){
    char upper_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower_letters[] = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i <= 25; i ++){
        if(letra == upper_letters[i]){
            return lower_letters[i];
        }
    }
    return letra;
}

int qnt_elementos(char frase[], int tamanho_max){
    int elementos = -1;
    for(int i = 0; i < tamanho_max; i++){
        if(frase[i] == 0){
            break;
        }
        else{
            elementos++;
        }
    }
    return elementos;
}

int main(){

    int i, j, k, repeat = 0, tamanho_vetor_b, tamanho_vetor_a, letters_in = 0, counter = 0, positions[10], counter_positions = 0;
    char str_a[40], str_b[40] = {0}, upper_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    fgets(str_b, 39, stdin);
    fgets(str_a, 39, stdin);
    
    tamanho_vetor_b = qnt_elementos(str_b, 40);
    
    for(i = 0; i <= 39; i++){
        for(j = 0; j<= 25; j++){
            if(str_a[i] == upper_letters[j]){
                str_a[i] = to_lower(str_a[i]);
            }
            if(str_b[i] == upper_letters[j]){
                str_b[i] = to_lower(str_b[i]);
            }
        }
    }

    for(i = 0; i <= 39; i++){
        if(str_a[i] == str_b[0]){
            for(k = i; k <= 39; k++){
                if(str_a[k] != str_b[counter]){
                    break;
                }
                else{
                    letters_in ++;
                    counter ++;
                }
            }
                if(letters_in >= tamanho_vetor_b){
                    positions[counter_positions] = i;
                    counter_positions++;
                    repeat ++;
                }
            }
            letters_in = 0;
            counter = 0;
        }
        printf("Repetições: %d\n", repeat);
        
        if(repeat != 0){
            printf("Posições: ");
            for(i = 0; i < repeat; i++){
                printf("%d ", positions[i]);
            }
        }
        return 0;
    }
