#include <stdio.h>
#include <ctype.h>
#include <string.h>

void minusculo(char str_in[], char str_out[]){
    int i = 0;
    do{
        str_out[i] = tolower(str_in[i]);
        i++;
    }while(str_in[i] != '\0');
    str_out[i] = '\0';
}

int main(){

    char str_1[20], str_2[20];
    int num_1, num_2;
    printf("Primeiro, digite um número para começarmos!\n");
    printf("Digite aqui o seu número :) ");
    scanf("%d", &num_1);
    printf("\nQual a operação que deseja fazer?");
    printf("\n1.Soma  2.Subtração  3.Multiplicação  4.Divisão  5.Clear  6.Sair\n");
    scanf("%s", str_1);
    minusculo(str_1, str_2);
    
    do{   
        if(strcmp(str_2, "soma") == 0)
        {
            printf("\nDigite aqui o número que deseja somar! ");
            scanf("%d", &num_2);
            num_1 += num_2;
            printf("\nO resultado da soma entre esses números é: %d", num_1);
        }
        else if(strcmp(str_2, "subtraçao") == 0)
        {
            printf("\nDigite aqui o número a ser subtraído!");
            scanf("\n%d", &num_2);
            num_1 -= num_2;
            printf("\nO resultado da subtração é: %d", num_1);
        }
        else if(strcmp(str_2, "multiplicaçao") == 0)
        {
            printf("\nDigite o número aqui a qual deseja multiplicar o seu valor!");
            scanf("\n%d", &num_2);
            num_1 *= num_2;
            printf("\nO resultado da multiplicação é: %d", num_1);
        }
        else if(strcmp(str_2, "divisao") == 0)
        {
            printf("\nDigite um número para dividir o que você já possui");
            scanf("\n%d", &num_2);
            num_1 /= num_2;
            printf("\nO resultado da sua divisão é: %d", num_1);
        }
        else if(strcmp(str_2, "clear") == 0)
        {
            char str_yes_or_no[20];
            printf("\nOkay, vou limpar o valor que você possui!");
            num_1 = 0;
            printf("\nDigite aqui o primeiro número das operações! ");
            scanf("\n%d", &num_1);
            printf("\nVamos continuar :D");
        }
        printf("\n");
        printf("\nQual a operação que deseja fazer agora?");
        printf("\n1.Soma  2.Subtraçao  3.Multiplicaçao  4.Divisao  5.Clear  6.Sair\n");
        scanf("%s", str_1);
        minusculo(str_1, str_2);
    
    }while(strcmp(str_2,"sair") != 0);

    printf("O resultado final foi: %d", num_1);
    printf("Obrigado por utilizar os meus serviços!");
    
    return 0;
}
