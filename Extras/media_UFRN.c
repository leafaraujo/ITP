#include <stdio.h>

int main() {

    float nota_1, nota_2, nota_3, nota_4, menor_nota, media;
    scanf("%f %f %f", &nota_1, &nota_2, &nota_3);
    media = (nota_1 + nota_2 + nota_3)/3;
    
    menor_nota = (nota_1 < nota_2 && nota_1 < nota_3)? nota_1 : 
    ((nota_2 < nota_3)? nota_2 : nota_3); 
    
    if (media >= 7){

        printf("Aprovado! Sua média foi: %f \n", media);

    }
    else if (media >= 5 && nota_1  >= 3 && nota_2 >= 3 && nota_3 >= 3){

        printf("Aprovado por nota! Sua média foi: %f\n", media);

    }
    else if (media < 3){

        printf("Você foi reprovado! Sua média foi: %f\n", media);

    }
    else{
        printf("Você ficou de recuperação! Sua média foi: %f\n", media);
        scanf("%f", &nota_4);
        if (nota_4 <= menor_nota){

            printf("Você está reprovado!");
        }
        else{
            if (menor_nota == nota_1 && menor_nota != nota_2 && menor_nota != nota_3 
            || (menor_nota == nota_2 && menor_nota != nota_1 && menor_nota != nota_3)
            || (menor_nota == nota_3 && menor_nota != nota_1 && menor_nota != nota_2)){

                if (nota_4 > nota_3 && nota_3 == menor_nota){
                    nota_3 = nota_4;

                }
                else if (nota_4 > nota_2 && nota_2 == menor_nota){

                    nota_2 = nota_4;
                }
                else if ( nota_4 > nota_1 && nota_1 == menor_nota){

                    nota_1 = nota_4;
                }

            }
            else if (menor_nota == nota_1 && menor_nota == nota_2 && menor_nota != nota_3
            || (menor_nota == nota_1 && menor_nota == nota_3 && menor_nota != nota_2)
            || (menor_nota == nota_2 && menor_nota == nota_3 && menor_nota != nota_2)){

                if (nota_1 == nota_2){

                    nota_1 == nota_4;
                }
                else if (nota_1 == nota_3){

                    nota_1 == nota_4;
                }
                else{

                    nota_2 == nota_4;
                } 
        
            }
            else{

                nota_1 = nota_4;
            }           

            media = (nota_1 + nota_2 + nota_3)/3;
            printf("Uhul, tu passou, agora é férias! Sua média foi de %f", media);

        }

    return 0;
}
