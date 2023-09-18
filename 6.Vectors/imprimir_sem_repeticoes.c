#include <stdio.h>

int main(){

    int quantidade_numeros, numero, contador = 0;
    scanf("%d", &quantidade_numeros);
    int vetor_numeros[quantidade_numeros], vetor_auxiliar[quantidade_numeros];
    for(int i = 0; i < quantidade_numeros ; i++)
    {
        scanf("%d", &numero);
        vetor_numeros[i] = numero;
        vetor_auxiliar[i] = 100;
    }
    for(int i = 0; i < quantidade_numeros ; i++)
    {   
        int repeticao = 0;
        for(int j = 0; j < quantidade_numeros ; j++)
        {
            if(vetor_numeros[i] == vetor_auxiliar[j])
            {
                repeticao = 1;
                break;
            }
        }
        if(repeticao != 1)
        {
            vetor_auxiliar[contador] = vetor_numeros[i];
            contador ++;
        }
    }
    for(int i = 0; i < quantidade_numeros; i++)
    {
        if(vetor_auxiliar[i] != 100)
        {
            printf("%d ", vetor_auxiliar[i]);
        }
    }

    return 0;
}
