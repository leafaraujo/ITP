#include <stdio.h>

int pontos(int player[9]){
    int pontuation_old = 0;
    int p_new[3];
    int pontuation_final = 0;
    int counter = 0;
    for(int i = 0; i <= 6; i += 3){
        if(player[i] <= player[i+1] && player[i] >= player[i+2] || player[i] >= player[i+1] && player[i] <= player[i+2]){
            pontuation_old = player[i];
        }
        else if(player[i+1] <= player[i] && player[i+1] >= player[i+2] || player[i+1] >= player[i] && player[i+1] <= player[i+2]){
            pontuation_old = player[i+1];
        }
        else{
            pontuation_old = player[i+2];
        }
    p_new[counter] = pontuation_old;
    counter += 1;
    }
    for(int j = 0; j <= 1; j += 3)
        if(p_new[j] <=  p_new[j+1] &&  p_new[j] >=  p_new[j+2] ||  p_new[j] >=  p_new[j+1] &&  p_new[j] <=  p_new[j+2]){
            pontuation_final =  p_new[j];
        }
        else if(p_new[j+1] <=  p_new[j] &&  p_new[j+1] >=  p_new[j+2] ||  p_new[j+1] >=  p_new[j] &&  p_new[j+1] <=  p_new[j+2]){
            pontuation_final = p_new[j+1];
        }
        else{
            pontuation_final = p_new[j+2];
        }   
    return pontuation_final;
}

void verificacao(int player_one[9], int player_two[9]){
    int soma_player_one = pontos(player_one);
    int soma_player_two = pontos(player_two);
    if(soma_player_one == soma_player_two){
        printf("empate");
    }
    else if(soma_player_one > soma_player_two){
        printf("A");
    }
    else{
        printf("B");
    } 

}

int main(){
    int player_a_1_1, player_a_1_2, player_a_1_3, player_a_2_1, player_a_2_2, player_a_2_3,
    player_a_3_1, player_a_3_2, player_a_3_3;
    
    int player_b_1_1, player_b_1_2, player_b_1_3, player_b_2_1, player_b_2_2, player_b_2_3,
    player_b_3_1, player_b_3_2, player_b_3_3;
    
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &player_a_1_1, &player_a_1_2, &player_a_1_3, 
    &player_a_2_1, &player_a_2_2, &player_a_2_3, &player_a_3_1, &player_a_3_2, &player_a_3_3, &player_b_1_1, &player_b_1_2, 
    &player_b_1_3, &player_b_2_1, &player_b_2_2, &player_b_2_3, &player_b_3_1, &player_b_3_2, &player_b_3_3);
    
    int pontos_player_a[9] = {player_a_1_1, player_a_1_2, player_a_1_3, player_a_2_1, player_a_2_2, player_a_2_3,
    player_a_3_1, player_a_3_2, player_a_3_3};
    
    int pontos_player_b[9] = {player_b_1_1, player_b_1_2, player_b_1_3, player_b_2_1, player_b_2_2, player_b_2_3,
    player_b_3_1, player_b_3_2, player_b_3_3};

    verificacao(pontos_player_a, pontos_player_b);

    return 0;
}
