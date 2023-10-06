#include <stdio.h>

char is_lower(char letra){
    char upper_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower_letters[] = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i <= 25; i ++){
        if(letra == upper_letters[i]){
            return lower_letters[i];
        }
    }
    return letra;
}

char is_upper(char letra){
    char upper_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower_letters[] = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i <= 25;  i++){
        if(letra == lower_letters[i]){
            return upper_letters[i];
        }
    }
    
    return letra;
}

int main(){

    char frase[60];
    fgets(frase, 59, stdin);
    
    for(int i = 1; i <= 59; i++){
        if(frase[i-1] == ' '){
            frase[i] = is_upper(frase[i]);
        }
        else{
            frase[i] = is_lower(frase[i]);
        }
    }
    printf("%s", frase);

    return 0;
}
