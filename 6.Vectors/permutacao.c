#include <stdio.h>

int repeat(int valor, int vetor[]){
    int tamaho_vetor = sizeof(vetor)/sizeof(vetor[1]);
    int counter = 0;
    for(int i = 0; i<= tamaho_vetor; i++)
    {
        if(vetor[i] == valor)
        {
            counter += 1;
        }
    }
    if(counter > 1)
    {
        return 1;
    }
    return 0;
}

int main(){

    int quantidade_numeros, numero;
    scanf("%d", &quantidade_numeros);
    int conjunto_numeros[quantidade_numeros];
    for(int i = 0; i < quantidade_numeros; i++)
    {
        scanf("%d", &numero);
        conjunto_numeros[i] = numero;
    }
    for(int i = 0; i < quantidade_numeros ; i++)
    {
        if(conjunto_numeros[i] > quantidade_numeros || 0 >= conjunto_numeros[i] || repeat(conjunto_numeros[i], conjunto_numeros) == 1){
            printf("não");
            return 0;
        }
    }
    printf("sim");
    return 0;   
}
