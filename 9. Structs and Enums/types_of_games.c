#include <stdio.h>
#include <string.h>

typedef enum Tipos_De_Jogos{
    LUTA,
    AVENTURA,
    ESTRATEGIA,
    ESPORTE,
    RPG
}Tipos_De_Jogos;

int main(){
    int players = 0, counter_fight = 0, counter_adventure = 0, counter_strategy = 0, counter_sport = 0, counter_roleplaying = 0, i;
    char player_name[10], game_genre[15];
    scanf("%d", &players);
    int preferencia[players];
    
    for(i =0; i < players; i++){
        scanf("%s", player_name);
        scanf("%s", game_genre);
        
         if(strcmp(game_genre, "LUTA") == 0) {
            preferencia[i] = LUTA;
         }
         else if(strcmp(game_genre, "AVENTURA") == 0) {
            preferencia[i] = AVENTURA;
         }
         else if(strcmp(game_genre, "ESTRATEGIA") == 0) {
            preferencia[i] = ESTRATEGIA;
         }
         else if(strcmp(game_genre, "ESPORTE") == 0) {
            preferencia[i] = ESPORTE;
         }
         else if(strcmp(game_genre, "RPG") == 0) {
            preferencia[i] = RPG;
         }
    }
    
    for(i = 0; i < players; i++){
        switch(preferencia[i]){
            case 0:
            counter_fight ++;
            break;
            
            case 1:
            counter_adventure ++;
            break;
            
            case 2:
            counter_strategy ++;
            break;
            
            case 3:
            counter_sport ++;
            break;
            
            case 4:
            counter_roleplaying ++;
            break;
        }
        
    }
    
    printf("Preferem LUTA: %d\n", counter_fight);
    printf("Preferem AVENTURA: %d\n", counter_adventure);
    printf("Preferem ESTRATEGIA: %d\n", counter_strategy);
    printf("Preferem ESPORTE: %d\n", counter_sport);
    printf("Preferem RPG: %d\n", counter_roleplaying);
    
    return 0;
}
