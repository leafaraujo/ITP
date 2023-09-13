#include <stdio.h>
#include <stdlib.h>

int responses(int questoes){

    int alternativa, corretas = 0;
    int *gabarito = (int *)malloc(questoes * sizeof(int));
    int *respostas_aluno = (int *)malloc(questoes * sizeof(int));
    for(int i=0; i < questoes; i++){
        scanf("%d", &alternativa);
        gabarito[i] = alternativa;
    } 
    for(int i=0; i < questoes; i++){
        scanf("%d", &alternativa);
        respostas_aluno[i] = alternativa;
    } 
    for(int i=0; i < questoes; i++){
        if(respostas_aluno[i] == gabarito[i]){
            corretas ++;
        }
    }
    return corretas;
}

int main(){
    int questions, resultado;
    scanf("%d", &questions);
    resultado = responses(questions);
    if(resultado == 1){
        printf("1 acerto");
    }
    else if(resultado > 1){
        printf("%d acertos", resultado);
    }
    return 0;
}
