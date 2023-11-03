#include <stdio.h>
#include <string.h>

void capitalize(char *str) { 
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 'a' + 'A';
    }
}

struct Aluno{
    int matricula, codigo_disciplina;
    char nome[30];
    float nota_1, nota_2, media;
};

typedef struct Aluno Aluno;

int main() {
    int qnt_alunos;
    char texto[100];
    scanf("%d", &qnt_alunos);
    getchar();

    Aluno turma[qnt_alunos];
    
    
    for(int i = 0; i < qnt_alunos; i++){
        fgets(texto, 100, stdin);
        sscanf(texto, "%d, %29[^,] , %d, %f , %f", &turma[i].matricula, turma[i].nome, &turma[i].codigo_disciplina, &turma[i].nota_1, &turma[i].nota_2);
        turma[i].media = (turma[i].nota_1 + (turma[i].nota_2 * 2.0)) / 3.0;
        capitalize(turma[i].nome);
    }
    
    for(int i = 0; i < qnt_alunos; i++){
        char convertido[4];
        sprintf(convertido,"%.2f", turma[i].media);
        printf("%s , média final = %.3s", turma[i].nome, convertido);
    }
    return 0;
}
