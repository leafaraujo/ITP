#include <stdio.h>

int main(){
    
    int counter, i, vidro = 0 , plastico = 0, papel = 0, organico = 0, metal = 0, eletronico = 0;
    char type_trash, minuscle;
    
    printf("Qual a quantidade de lixos que você deseja verificar?\n");
    scanf("%d", &counter);
    printf("-----------------TIPOS DE LIXO-----------------");
    printf("\n - V/v = vidro \n - L/l = plastico \n - P/p = papel \n - O/o = organico \n - M/m = metal \n - E/e = eletronico\n \n");
    
    for(i = 0; i < counter ; i++)
    {
        printf("Digite a letra correspondente ao lixo = ");
        scanf(" %c", &type_trash);
        switch(type_trash)
        {
            case 'V':
            case 'v': vidro++; break;
            case 'L':
            case 'l': plastico++; break;
            case 'P':
            case 'p': papel++; break;
            case 'O':
            case 'o': organico++; break;
            case 'M':
            case 'm': metal++; break;
            case 'E':
            case 'e': eletronico++; break;
        }
    }
    printf("_\n-----------------LIXOS SEPARADOS-----------------");
    printf("\nVidro = %d", vidro);
    printf("\nPapel = %d", papel);
    printf("\nMetal = %d", metal);
    printf("\nPlastico = %d", plastico);
    printf("\nOrganico = %d", organico);
    printf("\nEletronico = %d", eletronico);

    return 0;
}
