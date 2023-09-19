#include <stdio.h>

int main(){

    int teams, i, j, goals, empates = 0, counter = 0;
    scanf("%d", &teams);
    
    int **matches = (int **)malloc(teams * sizeof(int *));
    for(i = 0; i < teams; i++){
        matches[i] = (int *)malloc(teams * sizeof(int));
    }
    
    for(i = 0; i < teams; i++){
        for(j = 0; j < teams; j++){
            scanf("%d", &goals);
            matches[i][j] = goals;
        }
    }

     for(i = 0; i < teams; i++){
        for(j = counter; j < teams; j++){
            if(i != j){
                if(matches[i][j] == matches[j][i]){
                    empates ++;
                }
            }
        }
        counter++;
    }

    printf("%d", empates);

    return 0;   
}
