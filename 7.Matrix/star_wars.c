#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n, coordenada_1, coordenada_2, i, j, counter = 1, acerto = 0, valor_total = 0;
    scanf("%d %d %d %d",&m, &n, &coordenada_1, &coordenada_2);

    int **mapa_planeta = (int**)malloc(m * sizeof(int*));
    for(i = 0; i < m; i++){
        mapa_planeta[i] = (int*)malloc(n * sizeof(int));
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &mapa_planeta[i][j]);
            valor_total += mapa_planeta[i][j];
        }
    }
    
    int media = valor_total/(m * n);
    
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(i == 0){
                if( j==0 ){
                    if(mapa_planeta[i][j] > mapa_planeta[i][j+1] && mapa_planeta[i][j] > mapa_planeta[i+1][j] && mapa_planeta[i][j] > media){
                        printf("Local %d: %d %d\n", counter, i + 1, j+ 1);
                        counter++;
                        if(i == coordenada_1 -1 && j == coordenada_2 - 1){
                            printf("Descanse na Força...");
                            acerto++;
                            break;
                        }
                    }
                }
                else if(j == n -1){
                    if(mapa_planeta[i][j] > mapa_planeta[i][j-1] && mapa_planeta[i][j] > mapa_planeta[i+1][j] && mapa_planeta[i][j] > media){
                        printf("Local %d: %d %d\n", counter, i + 1, j+ 1);
                        counter++;
                        if(i == coordenada_1 -1 && j == coordenada_2 - 1){
                            printf("Descanse na Força...");
                            acerto++;
                            break;
                        }
                    }
                }
                else{
                    if(mapa_planeta[i][j] > mapa_planeta[i][j-1] && mapa_planeta[i][j] > mapa_planeta[i+1][j] && mapa_planeta[i][j] > mapa_planeta[i][j+1] && mapa_planeta[i][j] > media){
                        printf("Local %d: %d %d\n", counter, i + 1, j+ 1);
                        counter++;
                        if(i == coordenada_1 -1 && j == coordenada_2 - 1){
                            printf("Descanse na Força...");
                            acerto++;
                            break;
                        }
                    }
                }

            }
            else if(i == m -1){
                if(j==0){
                    if(mapa_planeta[i][j] > mapa_planeta[i][j+1] && mapa_planeta[i][j] > mapa_planeta[i-1][j] && mapa_planeta[i][j] > media){
                        printf("Local %d: %d %d\n", counter, i + 1, j+ 1);
                        counter++;
                        if(i == coordenada_1 -1 && j == coordenada_2 - 1){
                            printf("Descanse na Força...");
                            acerto++;
                            break;
                        }
                    }
                }
                else if(j == n -1){
                    if(mapa_planeta[i][j] > mapa_planeta[i][j-1] && mapa_planeta[i][j] > mapa_planeta[i-1][j] && mapa_planeta[i][j] > media){
                        printf("Local %d: %d %d\n", counter, i + 1, j+ 1);
                        counter++;
                        if((i == coordenada_1 -1 && j == coordenada_2 - 1)){
                            printf("Descanse na Força...");
                            acerto++; 
                            break;
                        }
                    }
                }
                else{
                    if(mapa_planeta[i][j] > mapa_planeta[i][j-1] && mapa_planeta[i][j] > mapa_planeta[i-1][j] && mapa_planeta[i][j] > mapa_planeta[i][j+1] && mapa_planeta[i][j] > media){
                        printf("Local %d: %d %d\n", counter, i + 1, j+ 1);
                        counter++;
                        if((i == coordenada_1 -1 && j == coordenada_2 - 1)){
                            printf("Descanse na Força...");
                            acerto++;
                            break;
                        }
                    }
                }
            }
            else{
                if(j==0){
                    if(mapa_planeta[i][j] > mapa_planeta[i][j+1] && mapa_planeta[i][j] > mapa_planeta[i+1][j] 
                    && mapa_planeta[i][j] > media && mapa_planeta[i][j] > mapa_planeta[i-1][j]  ){
                        printf("Local %d: %d %d\n", counter, i + 1, j+ 1);
                        counter++;
                        if(i == coordenada_1 -1 && j == coordenada_2 - 1){
                            printf("Descanse na Força...");
                            acerto++;
                            break;
                        }
                    }
                }
                else if(j == n -1){
                    if(mapa_planeta[i][j] > mapa_planeta[i][j-1] && mapa_planeta[i][j] > mapa_planeta[i-1][j] 
                    && mapa_planeta[i][j] > media && mapa_planeta[i][j] > mapa_planeta[i+1][j] ){
                        printf("Local %d: %d %d\n", counter, i + 1, j+ 1);
                        counter++;
                        if((i == coordenada_1 -1 && j == coordenada_2 - 1)){
                            printf("Descanse na Força...");
                            acerto++; 
                            break;
                        }
                    }
                }
                if(mapa_planeta[i][j] > mapa_planeta[i][j-1] && mapa_planeta[i][j] > mapa_planeta[i-1][j] && 
                mapa_planeta[i][j] > mapa_planeta[i][j+1] && mapa_planeta[i][j] > mapa_planeta[i+1][j] + 2 && mapa_planeta[i][j] > media){
                    printf("Local %d: %d %d\n", counter, i + 1, j+ 1);
                    counter++;
                    if((i == coordenada_1 -1 && j == coordenada_2 - 1)){
                            printf("Descanse na Força...");
                            acerto++;
                            break;
                    }
                }
            }
        }
    }
    
    if(acerto == 0){
        printf("Ao resgate!");
    }

    return 0;
}
