#include <stdio.h>

void print_vetor(int vetor[], int tamanho_vetor)
{
    for(int i =0; i < tamanho_vetor; i++)
    {
        if(i == tamanho_vetor - 1)
        {
            printf("%d", vetor[i]);
        }
        else
        {
            printf("%d, ", vetor[i]);
        }
    }
}

int main(){

    int numero, divisivel_2 =0, divisivel_3 = 0, nao_divisivel_2_3 = 0;
    int vetor_numeros[15];
    
    for(int i = 0; i < 15 ; i++)
    {
        scanf("%d", &numero);
        vetor_numeros[i] = numero;
    }
    
    for(int i = 0; i < 15 ; i++)
    {
        if(vetor_numeros[i] % 2 == 0 || vetor_numeros[i] % 3 == 0)
        {
            if(vetor_numeros[i] % 2 == 0)
            {
                divisivel_2 ++;
            }
            if(vetor_numeros[i] % 3 == 0)
            {
                divisivel_3 ++;
            }
        }
        else
        {
            nao_divisivel_2_3 ++;
        }
    }
    
    int vetor_b[divisivel_2], vetor_c[divisivel_3], vetor_d[nao_divisivel_2_3];
    int counter_b = 0, counter_c = 0, counter_d = 0;

    for(int i = 0; i < 15 ; i++)
    {
        if(vetor_numeros[i] % 2 == 0 || vetor_numeros[i] % 3 == 0)
        {
            if(vetor_numeros[i] % 2 == 0)
            {
                vetor_b[counter_b] = vetor_numeros[i];
                counter_b ++;
            }
            if(vetor_numeros[i] % 3 == 0)
            {
                vetor_c[counter_c] = vetor_numeros[i];
                counter_c ++;
            }
        }
        else
        {
            vetor_d[counter_d] = vetor_numeros[i];
            counter_d ++;
        }
    }
    printf("B = [");
    print_vetor(vetor_b, divisivel_2);
    printf("]\n");
    printf("C = ["); 
    print_vetor(vetor_c, divisivel_3);
    printf("]\n");
    printf("D = ["); 
    print_vetor(vetor_d, nao_divisivel_2_3);
    printf("]");
    return 0;
}
