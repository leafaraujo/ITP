#include <stdio.h>
#include <string.h>

typedef enum Tipos_Chocolates{
    BRANCO,
    AMARGO,
    AO_LEITE,
    COM_CASTANHAS
} Tipos_Chocolates;

typedef struct Chocolates{
    char nome_chocolate[50];
    Tipos_Chocolates tipo;
    float peso, preco;
} Chocolates;

int main(){

    int qnt_chocolates, i, qnt_branco = 0, qnt_amargo = 0, qnt_ao_leite = 0, qnt_com_castanhas = 0, indice_mais_caro = 0, indice_mais_barato = 0,
    valor_mais_caro = 0, valor_mais_barato = 0;
    scanf("%d", &qnt_chocolates);
    getchar();

    Chocolates armazenamento[qnt_chocolates];

    for(i = 0; i < qnt_chocolates ; i++){
        scanf("%s", armazenamento[i].nome_chocolate);
        scanf("%f", &armazenamento[i].peso);
        scanf("%f", &armazenamento[i].preco);
        
        char tipo_choco[15];
        scanf("%s", tipo_choco);
        
        if(strcmp(tipo_choco, "BRANCO") == 0) {
            armazenamento[i].tipo = BRANCO;
        } 
        else if(strcmp(tipo_choco, "AMARGO") == 0) {
            armazenamento[i].tipo = AMARGO;
        } 
        else if(strcmp(tipo_choco, "AO_LEITE") == 0) {
            armazenamento[i].tipo = AO_LEITE;
        } 
        else if(strcmp(tipo_choco, "COM_CASTANHAS") == 0) {
            armazenamento[i].tipo = COM_CASTANHAS;
        }
    }
    
    for(i = 0; i < qnt_chocolates; i++){
        if(armazenamento[i].tipo == BRANCO){
            qnt_branco ++;
        }
        else if(armazenamento[i].tipo == AMARGO){
            qnt_amargo ++;
        }
        else if(armazenamento[i].tipo == AO_LEITE){
            qnt_ao_leite ++;
        }
        if(armazenamento[i].tipo == COM_CASTANHAS){
            qnt_com_castanhas ++;
        }

    }
    
    valor_mais_caro = armazenamento[0].preco;
    valor_mais_barato = armazenamento[0].preco;
    
    for(i=1; i < qnt_chocolates; i++){
        if(armazenamento[i].preco > valor_mais_caro){
            valor_mais_caro = armazenamento[i].preco;
            indice_mais_caro = i;
        }
        else if(armazenamento[i].preco < valor_mais_barato){
            valor_mais_barato = armazenamento[i].preco;
            indice_mais_barato = i;
        }
    }
    
    printf("Total de chocolates BRANCO: %d\n", qnt_branco);
    printf("Total de chocolates AMARGO: %d\n", qnt_amargo);
    printf("Total de chocolates AO_LEITE: %d\n", qnt_ao_leite);
    printf("Total de chocolates COM_CASTANHAS: %d\n", qnt_com_castanhas);
    printf("Chocolate mais caro: %s - R$%.2f\n", armazenamento[indice_mais_caro].nome_chocolate, armazenamento[indice_mais_caro].preco);
    printf("Chocolate mais barato: %s - R$%.2f\n", armazenamento[indice_mais_barato].nome_chocolate, armazenamento[indice_mais_barato].preco);

    return 0;
}  
