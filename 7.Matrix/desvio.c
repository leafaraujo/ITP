#include <stdio.h>
#include <stdlib.h>

int verificacao(int **muro, int y, int x){
    int origem = 0;
    scanf("%d", &origem);
    for(int i = 0; i < x; i++){
        if(muro[i][origem] == 1){
            origem --;
        }
        else if(muro[i][origem] == 2){
            origem ++;
        }
        
        if(origem < 0 || origem > y - 1){
            return 0;
        }   
    }
    return origem;
}

int main(){

    int altura, largura, resultado;
    scanf("%d %d", &altura, &largura);

    int **muro = (int**)malloc(altura*sizeof(int*));
    for(int i = 0; i < altura; i++){
        muro[i] =  (int*)malloc(largura*sizeof(int));
    }

    for(int i = 0; i < altura; i ++){
        for(int j = 0; j < largura; j ++){
            scanf("%d", &muro[i][j]);
        }
    }

    resultado = verificacao(muro, largura, altura);
    
    if(resultado == 0){
        printf("ops");
    }
    else{
        printf("%d", resultado);
    }
    return 0;
}
