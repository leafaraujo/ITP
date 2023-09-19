#include <stdio.h>

int one_piece(int ilhas_grand_line[], int auxiliar[]){
    int verificador = 0, ilha_tesouro, counter = 0, proxima_ilha, indice = 0, tesouro;
    while(verificador == 0)
    {
        proxima_ilha = ilhas_grand_line[indice];
        for(int j = 0; j < 10; j++)
        {
            if(auxiliar[j] == indice)
            {
                verificador = 1;
            }
        }
        if(verificador == 1)
        {
            ilha_tesouro = indice;
            break;
        }
        else
        {
            auxiliar[indice] = indice;
        }
        indice = proxima_ilha;
        
    }
    return ilha_tesouro;
}


int main(){

    int ilhas[10], auxiliar[10], ilha;
    for(int i =0; i < 10; i++)
    {
        scanf("%d", &ilha);
        ilhas[i] = ilha;
        auxiliar[i] = -1;
    }
    int ilha_tesouro = one_piece(ilhas, auxiliar);
    printf("%d", ilha_tesouro);
    return 0;
}
