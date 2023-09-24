#include <stdio.h>
#include <stdlib.h>

int main(){

    int altura, largura, i, j, setor_terra, setores_ferteis_irrigados = 0, setores_ferteis_nao_irrigados = 0, total_ferteis =0;
    scanf("%d %d", &altura, &largura);
    
    int **fazenda = (int **)malloc(altura * sizeof(int *));
    for(i = 0; i < altura; i++){
        fazenda[i] = (int *)malloc(largura * sizeof(int));
    }
    
    for(i = 0; i < altura; i++){
        for(j = 0; j < largura; j++){
            scanf("%d", &setor_terra);
            fazenda[i][j] = setor_terra;
            if(setor_terra == 1){
                total_ferteis ++;
            }
        }
    }

    for(i = 1; i < altura - 1; i++){
        for(j = 1; j < largura - 1; j++){
            if(fazenda[i][j] == 2 ){
                if(fazenda[i][j-1] == 1){
                    fazenda[i][j-1] = 3;
                }
                if(fazenda[i][j+1] == 1){
                    fazenda[i][j+1] = 3;
                }
                if(fazenda[i-1][j] == 1){
                    fazenda[i-1][j] = 3;
                }
                if(fazenda[i+1][j] == 1){
                    fazenda[i+1][j] = 3;
                }
            }
        }
    }
    
    for(i = 0; i < altura; i++){
        for(j = 0; j < largura; j++)
        if(fazenda[i][j] == 3){
            setores_ferteis_irrigados ++;
        }
    }
    
    setores_ferteis_nao_irrigados = total_ferteis - setores_ferteis_irrigados;
    printf("%d %d", setores_ferteis_irrigados, setores_ferteis_nao_irrigados);
    return 0;  
}
