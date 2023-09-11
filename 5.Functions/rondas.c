#include <stdio.h>

void rondas(int velho_horario, int counter){
    int novo_horario = 0;
    int horas = 0; 
    int minutos = 0;
    int segundos = 0;
    switch(counter){
        case 1: novo_horario = velho_horario + 3600; break;
        case 2: novo_horario = velho_horario + 7830; break;
        case 3: novo_horario = velho_horario + 16850; break;
        case 4: novo_horario = velho_horario + 43505; break;
    }
    horas = novo_horario / 3600;
    minutos = (novo_horario % 3600) / 60;
    segundos = (novo_horario % 3600) - (minutos * 60);
    if(segundos >= 60){
        segundos -= 60;
        minutos += 1;
    }
    if(minutos >= 60){
        minutos -= 60;
        horas += 1;
    }
    if(horas >= 24){
        horas -= 24;   
    }
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
}

int main(){
    int horas, minutos, segundos, horario_total;
    scanf("%d %d %d", &horas, &minutos, &segundos);
    horario_total = (horas * 3600) + (minutos * 60) + segundos;
    for( int i = 1; i <= 4; i++){
        rondas(horario_total, i);
    }
    return 0;
}
